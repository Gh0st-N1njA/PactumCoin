

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *alnj_strings[] = {
QT_TRANSLATE_NOOP("alnj-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("alnj-core", " mints updated, "),
QT_TRANSLATE_NOOP("alnj-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("alnj-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Cannot obtain a lock on data directory %s. ALNJ Core is probably already "
"running."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Delete all zerocoin spends and mints that have been recorded to the "
"blockchain database and reindex them (0-1, default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Disable all ALNJ specific functionality (Masternodes, Zerocoin, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Enable cold staking functionality (0-1, default: %u). Disabled if staking=0"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Enable or disable staking functionality for ALNJ inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Enable or disable staking functionality for zALNJ inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Error: The transaction is larger than the maximum allowed transaction size!"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Exclude debugging information for a category. Can be used in conjunction "
"with -debug=1 to output debug logs for all categories except one or more "
"specified categories."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Execute command when the best block changes and its size is over (%s in cmd "
"is replaced by block hash, %d with the block size)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Failed to find coin set amongst held coins with less than maxNumber of Spends"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Fees (in ALNJ/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Fees (in ALNJ/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"In rare cases, a spend with 7 coins exceeds our maximum allowable "
"transaction size, please retry spend using 6 or less coins"),
QT_TRANSLATE_NOOP("alnj-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Maximum average size of an index occurrence in the block spam filter "
"(default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Maximum size of the list of indexes in the block spam filter (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong ALNJ Core will not work properly."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Specify custom backup path to add a copy of any wallet backup. If set as "
"dir, every backup generates a timestamped file. If set as file, will rewrite "
"to that file every backup."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Specify location of debug log file: this can be an absolute path or a path "
"relative to the data directory (default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("alnj-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("alnj-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("alnj-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Unable to bind to %s on this computer. ALNJ Core is probably already running."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("alnj-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong ALNJ Core will not work properly."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("alnj-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("alnj-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("alnj-core", "(51472 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("alnj-core", "(default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", "(default: 1)"),
QT_TRANSLATE_NOOP("alnj-core", "(must be 51472 for mainnet)"),
QT_TRANSLATE_NOOP("alnj-core", "<category> can be:"),
QT_TRANSLATE_NOOP("alnj-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("alnj-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("alnj-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("alnj-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("alnj-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("alnj-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("alnj-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("alnj-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", "Block creation options:"),
QT_TRANSLATE_NOOP("alnj-core", "Cannot create public spend input"),
QT_TRANSLATE_NOOP("alnj-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("alnj-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("alnj-core", "Cannot upgrade to HD wallet (already running HD support). Version: %d"),
QT_TRANSLATE_NOOP("alnj-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("alnj-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("alnj-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("alnj-core", "Connection options:"),
QT_TRANSLATE_NOOP("alnj-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("alnj-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("alnj-core", "Copyright (C) 2015-%i The ALNJ Core Developers"),
QT_TRANSLATE_NOOP("alnj-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("alnj-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("alnj-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("alnj-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("alnj-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("alnj-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("alnj-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("alnj-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("alnj-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("alnj-core", "Done loading"),
QT_TRANSLATE_NOOP("alnj-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("alnj-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("alnj-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("alnj-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("alnj-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("alnj-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("alnj-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("alnj-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("alnj-core", "Error loading block database"),
QT_TRANSLATE_NOOP("alnj-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("alnj-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("alnj-core", "Error loading wallet.dat: Wallet requires newer version of ALNJ Core"),
QT_TRANSLATE_NOOP("alnj-core", "Error opening block database"),
QT_TRANSLATE_NOOP("alnj-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("alnj-core", "Error writing zerocoinDB to disk"),
QT_TRANSLATE_NOOP("alnj-core", "Error"),
QT_TRANSLATE_NOOP("alnj-core", "Error: "),
QT_TRANSLATE_NOOP("alnj-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("alnj-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("alnj-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("alnj-core", "Error: No valid utxo!"),
QT_TRANSLATE_NOOP("alnj-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("alnj-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("alnj-core", "Failed to find Zerocoins in wallet.dat"),
QT_TRANSLATE_NOOP("alnj-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("alnj-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("alnj-core", "Failed to parse public spend"),
QT_TRANSLATE_NOOP("alnj-core", "Failed to read block"),
QT_TRANSLATE_NOOP("alnj-core", "Failed to select a zerocoin"),
QT_TRANSLATE_NOOP("alnj-core", "Failed to wipe zerocoinDB"),
QT_TRANSLATE_NOOP("alnj-core", "Failed to write coin serial number into wallet"),
QT_TRANSLATE_NOOP("alnj-core", "Fee (in ALNJ/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("alnj-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("alnj-core", "Importing..."),
QT_TRANSLATE_NOOP("alnj-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("alnj-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("alnj-core", "Information"),
QT_TRANSLATE_NOOP("alnj-core", "Initialization sanity check failed. ALNJ Core is shutting down."),
QT_TRANSLATE_NOOP("alnj-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("alnj-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("alnj-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("alnj-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("alnj-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("alnj-core", "Invalid amount"),
QT_TRANSLATE_NOOP("alnj-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("alnj-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("alnj-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("alnj-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Line: %d"),
QT_TRANSLATE_NOOP("alnj-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("alnj-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("alnj-core", "Loading block index..."),
QT_TRANSLATE_NOOP("alnj-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("alnj-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("alnj-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("alnj-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("alnj-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("alnj-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("alnj-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Lookup(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("alnj-core", "MNs synchronization pending..."),
QT_TRANSLATE_NOOP("alnj-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Masternode options:"),
QT_TRANSLATE_NOOP("alnj-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Mint did not make it into blockchain"),
QT_TRANSLATE_NOOP("alnj-core", "Need destination or change address because change is not exact"),
QT_TRANSLATE_NOOP("alnj-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("alnj-core", "Node relay options:"),
QT_TRANSLATE_NOOP("alnj-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("alnj-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("alnj-core", "Number of custom location backups to retain (default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", "On first run, create a legacy wallet instead of a HD wallet"),
QT_TRANSLATE_NOOP("alnj-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("alnj-core", "Options:"),
QT_TRANSLATE_NOOP("alnj-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("alnj-core", "Peers are being disconnected due time differences."),
QT_TRANSLATE_NOOP("alnj-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("alnj-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Print version and exit"),
QT_TRANSLATE_NOOP("alnj-core", "Pubcoin not found in mint tx"),
QT_TRANSLATE_NOOP("alnj-core", "RPC server options:"),
QT_TRANSLATE_NOOP("alnj-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("alnj-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("alnj-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("alnj-core", "Recalculating ALNJ supply..."),
QT_TRANSLATE_NOOP("alnj-core", "Reindex the ALNJ and zALNJ money supply statistics"),
QT_TRANSLATE_NOOP("alnj-core", "Reindexing zerocoin database..."),
QT_TRANSLATE_NOOP("alnj-core", "Reindexing zerocoin failed"),
QT_TRANSLATE_NOOP("alnj-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("alnj-core", "Rescanning..."),
QT_TRANSLATE_NOOP("alnj-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("alnj-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("alnj-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("alnj-core", "Selected coins value is less than payment target"),
QT_TRANSLATE_NOOP("alnj-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("alnj-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("alnj-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("alnj-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("alnj-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("alnj-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("alnj-core", "Specify data directory"),
QT_TRANSLATE_NOOP("alnj-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("alnj-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("alnj-core", "Spend Valid"),
QT_TRANSLATE_NOOP("alnj-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Staking options:"),
QT_TRANSLATE_NOOP("alnj-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("alnj-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("alnj-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("alnj-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("alnj-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("alnj-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("alnj-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("alnj-core", "Syncing zALNJ wallet..."),
QT_TRANSLATE_NOOP("alnj-core", "This help message"),
QT_TRANSLATE_NOOP("alnj-core", "This is experimental software."),
QT_TRANSLATE_NOOP("alnj-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("alnj-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Too many spends needed"),
QT_TRANSLATE_NOOP("alnj-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("alnj-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("alnj-core", "Transaction Created"),
QT_TRANSLATE_NOOP("alnj-core", "Transaction Mint Started"),
QT_TRANSLATE_NOOP("alnj-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("alnj-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("alnj-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("alnj-core", "Transaction too large"),
QT_TRANSLATE_NOOP("alnj-core", "Trying to spend an already spent serial #, try again."),
QT_TRANSLATE_NOOP("alnj-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("alnj-core", "Unable to find transaction containing mint %s"),
QT_TRANSLATE_NOOP("alnj-core", "Unable to find transaction containing mint, txHash: %s"),
QT_TRANSLATE_NOOP("alnj-core", "Unable to generate initial key"),
QT_TRANSLATE_NOOP("alnj-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("alnj-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("alnj-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("alnj-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("alnj-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("alnj-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("alnj-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("alnj-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Use block spam filter (default: %u)"),
QT_TRANSLATE_NOOP("alnj-core", "Use the test network"),
QT_TRANSLATE_NOOP("alnj-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("alnj-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("alnj-core", "Value is below the smallest available denomination (= 1) of zALNJ"),
QT_TRANSLATE_NOOP("alnj-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("alnj-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("alnj-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("alnj-core", "Wallet needed to be rewritten: restart ALNJ Core to complete"),
QT_TRANSLATE_NOOP("alnj-core", "Wallet options:"),
QT_TRANSLATE_NOOP("alnj-core", "Wallet window title"),
QT_TRANSLATE_NOOP("alnj-core", "Warning"),
QT_TRANSLATE_NOOP("alnj-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("alnj-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("alnj-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("alnj-core", "You don't have enough Zerocoins in your wallet"),
QT_TRANSLATE_NOOP("alnj-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("alnj-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("alnj-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("alnj-core", "Zerocoin minting available only on regtest"),
QT_TRANSLATE_NOOP("alnj-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("alnj-core", "isValid(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("alnj-core", "on startup"),
QT_TRANSLATE_NOOP("alnj-core", "wallet.dat corrupt, salvage failed"),
};
