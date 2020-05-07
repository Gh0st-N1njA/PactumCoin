// Copyright (c) 2017-2020 The ALNJ developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "zalnj/zpos.h"
#include "zalnjchain.h"


/*
 * LEGACY: Kept for IBD in order to verify zerocoin stakes occurred when zPoS was active
 * Find the first occurrence of a certain accumulator checksum.
 * Return block index pointer or nullptr if not found
 */

uint32_t ParseAccChecksum(uint256 nCheckpoint, const libzerocoin::CoinDenomination denom)
{
    int pos = std::distance(libzerocoin::zerocoinDenomList.begin(),
            find(libzerocoin::zerocoinDenomList.begin(), libzerocoin::zerocoinDenomList.end(), denom));
    nCheckpoint = nCheckpoint >> (32*((libzerocoin::zerocoinDenomList.size() - 1) - pos));
    return nCheckpoint.Get32();
}

bool CLegacyZAlngStake::InitFromTxIn(const CTxIn& txin)
{
    // Construct the stakeinput object
    if (!txin.IsZerocoinSpend())
        return error("%s: unable to initialize CLegacyZAlngStake from non zc-spend");

    // Check spend type
    libzerocoin::CoinSpend spend = TxInToZerocoinSpend(txin);
    if (spend.getSpendType() != libzerocoin::SpendType::STAKE)
        return error("%s : spend is using the wrong SpendType (%d)", __func__, (int)spend.getSpendType());

    *this = CLegacyZAlngStake(spend);

    // Find the pindex with the accumulator checksum
    if (!GetIndexFrom())
        return error("%s : Failed to find the block index for zalnj stake origin", __func__);

    // All good
    return true;
}

CLegacyZAlngStake::CLegacyZAlngStake(const libzerocoin::CoinSpend& spend)
{
    this->nChecksum = spend.getAccumulatorChecksum();
    this->denom = spend.getDenomination();
    uint256 nSerial = spend.getCoinSerialNumber().getuint256();
    this->hashSerial = Hash(nSerial.begin(), nSerial.end());
}

CBlockIndex* CLegacyZAlngStake::GetIndexFrom()
{
    // First look in the legacy database
    int nHeightChecksum = 0;
    if (zerocoinDB->ReadAccChecksum(nChecksum, denom, nHeightChecksum)) {
        return chainActive[nHeightChecksum];
    }

    // Not found. Scan the chain.
    const Consensus::Params& consensus = Params().GetConsensus();
    CBlockIndex* pindex = chainActive[consensus.height_start_ZC];
    if (!pindex) return nullptr;
    while (pindex && pindex->nHeight <= consensus.height_last_ZC_AccumCheckpoint) {
        if (ParseAccChecksum(pindex->nAccumulatorCheckpoint, denom) == nChecksum) {
            // Found. Save to database and return
            zerocoinDB->WriteAccChecksum(nChecksum, denom, pindex->nHeight);
            return pindex;
        }
        //Skip forward in groups of 10 blocks since checkpoints only change every 10 blocks
        if (pindex->nHeight % 10 == 0) {
            pindex = chainActive[pindex->nHeight + 10];
            continue;
        }
        pindex = chainActive.Next(pindex);
    }
    return nullptr;
}

CAmount CLegacyZAlngStake::GetValue() const
{
    return denom * COIN;
}

CDataStream CLegacyZAlngStake::GetUniqueness() const
{
    CDataStream ss(SER_GETHASH, 0);
    ss << hashSerial;
    return ss;
}

// Verify stake contextual checks
bool CLegacyZAlngStake::ContextCheck(int nHeight, uint32_t nTime)
{
    const Consensus::Params& consensus = Params().GetConsensus();
    if (nHeight < consensus.height_start_ZC_SerialsV2 || nHeight >= consensus.height_last_ZC_AccumCheckpoint)
        return error("%s : zALNJ stake block: height %d outside range", __func__, nHeight);

    // The checkpoint needs to be from 200 blocks ago
    const int cpHeight = nHeight - 1 - consensus.ZC_MinStakeDepth;
    const libzerocoin::CoinDenomination denom = libzerocoin::AmountToZerocoinDenomination(GetValue());
    if (ParseAccChecksum(chainActive[cpHeight]->nAccumulatorCheckpoint, denom) != GetChecksum())
        return error("%s : accum. checksum at height %d is wrong.", __func__, nHeight);

    // All good
    return true;
}