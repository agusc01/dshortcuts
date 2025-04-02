# Inspired in flybinds

# my build of dshortcuts

Modifications:

- View my `dotfiles` repo for my scripts, in `~/sc/dshortcuts`.
- Better organization with new `items.h` file.

# dshortcuts

Create keyboard shortcuts (and show available combinations in top of screen) without holding
modifier keys (ctrl, super, meta, ...)

It's inspired in Doom Emacs key management and the code is based on dmenu.

## Usage

Map a key to open this program (maybe `\`, `¡` or `CapsLock` key, which are never used.
Then it will show on top of the screen available key combinations. For example,

```
x s -> shutdowns computer
x r -> reboots computer

l w -> launch browser
l v -> launch vim

m h -> set monitor to HDMI
m d -> dual display monitor
...
```

You can press Left Key to go up to the menu.

For more power, you can launch `dshortcuts` followed by some arguments `key1 key2 ...` to navigate to those items.

For example, let's say we have a parent item **c (config)** and there a child **m (monitors)** which have child to setup the monitors. Then, we can run `dshortcuts c m` to open _dshortcuts_ directly in the _monitors_ section.

## Scripts

To avoid writing a script per item, you can group a script for a whole submenu. In the example of _shutdown, reboot, ..._ we can write a simple script like this:

```bash
case "$@" in
    s) poweroff ;;
    r) reboot ;;
esac
```

and only set the path of the script to the parent items.

Just play around with the program and you will understand it!

## Requirements

In order to build dshortcuts you need the Xlib header files.

## Installation

Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dshortcuts
(if necessary as root):

    make clean install
