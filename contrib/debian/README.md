
Debian
====================
This directory contains files used to package pactumcoind/pactumcoin-qt
for Debian-based Linux systems. If you compile pactumcoind/pactumcoin-qt yourself, there are some useful files here.

## pctm: URI support ##


pactumcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install pactumcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your pactumcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/pctm128.png` to `/usr/share/pixmaps`

pactumcoin-qt.protocol (KDE)

