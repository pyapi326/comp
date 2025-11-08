# comp
# COMP_MODULE
A cross-platform C++ module for basic arithmetic operations (add, sub, mul, div) with zero-check.

## Build
1. Create build directory: `mkdir build && cd build`
2. Run CMake: `cmake ..`
3. Compile: `make` (Linux/macOS) or use Visual Studio (Windows)

## Features
- Supports static/dynamic library (toggle via BUILD_SHARED_LIBS)
- Cross-platform (Windows, Linux, macOS)
- Zero-check for division (returns error if A/B is 0)
