# File separation demo

This folder is the smallest possible version of the pattern used in the Particle Systems class:

- `main.cpp` creates and coordinates an object.
- `rain.hpp` declares the `Rain` type and its public operations.
- `rain.cpp` defines those operations.
- `CMakeLists.txt` tells the build which `.cpp` files belong to the executable.

Important: `#include "rain.hpp"` does **not** compile `rain.cpp`. The build compiles `main.cpp` and `rain.cpp` separately, then the linker connects their object files.
