# slock
A simple screen locker utility for X written by the Suckless community at [suckless.org](https://www.suckless.org/).

# Patches
This build of `slock` has been patched with `dpms` support, to turn your screen off after a certain period of time, and the ability to display a custom message when locking the screen.

Like other Suckless utilities, configuration is done through editing `config.def.h` and recompiling the source code.

To find available fonts for the custom message, run

`slock -f`

The default in this build is `6x13`

Here's an example of a custom message displaying the time the screen was locked at

`slock -m "Locked at $(date '+%a %d, %H:%M:%S')"`

# Installation
### Clone this repository

`git clone https://github.com/oterodiaz/slock`

### Go into the folder
`cd slock`

### Install
Run the install script (requires root privileges)

`./install.sh`

`slock` will be installed to `/usr/local/bin/slock`.
