# C++ Project Template
## Forked and adapted from [ C++ CMake Project Template](https://github.com/drumaddict/cmake-init)

[Setup Guide](https://github.com/cginternals/cmake-init/wiki/Setup-Guide)

cmake-init is a copy and paste template, that provides the following features:
 * Cross Platform
  * Windows
  * Linux
  * Mac
 * Libraries, Applications, Testing template
 * Documentation template
 * Installation, Packaging template
 * CMake find script template for defined libraries

The files of cmake-init are an instantiation of the templates containing:
  * Example app
  * Example lib
  * Example test
  * Example documentation
  * Example package

| Service | System | Compiler | Status |
| ------- | ------ | -------- | -----: |
|  [Travis-CI](https://travis-ci.org/drumaddict/cmake-init) | Ubuntu 14.04 | GCC 4.8, Clang 3.5 | [![Build Status](https://travis-ci.org/drumaddict/cmake-init.svg?branch=master)](https://travis-ci.org/drumaddict/cmake-init) |
|  [Travis-CI](https://travis-ci.org/drumaddict/cmake-init) | macOS | AppleClang 7.3 | [![Build Status](https://travis-ci.org/drumaddict/cmake-init.svg?branch=master)](https://travis-ci.org/drumaddict/cmake-init) |


Scenarios covered in cmake-init:

1) Development

The project is contained in a source directory for active development.

binaries: ./build
rpath:    absolute paths to all dependencies
datapath: ..


2) Installation (default)

The project is installed in a self-contained directory, ready for being moved or copied to another location or computer.

binaries: ./bin
rpath:    $ORIGIN/../lib
datapath: ..


3) Installation (unix system install)

The project is installed globally on a system.

binaries: /usr/[local/]bin
rpath:    empty
datapath: /usr/[local/]share/<projectname>
