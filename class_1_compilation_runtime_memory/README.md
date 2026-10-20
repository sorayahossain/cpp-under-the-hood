# Class 1 - Files, Compilation, Runtime, Stack and Heap

## Suggested order

1. Build `00_file_structure` and identify the job of each file.
2. Read `01_build_pipeline/00_tiny_test`, then inspect its generated assembly, object sections, symbols and relocation information.
3. Build the multi-file program in `01_build_pipeline` and deliberately omit one object file at link time.
4. Build static and shared versions of the score library in `02_static_dynamic_library`.
5. Run the lifetime and memory examples in `03_runtime_memory`.

## Important teaching distinction

`#include "rain.hpp"` gives one translation unit declarations. It does not compile `rain.cpp`. The build target compiles source files separately; the linker connects their object files.

## GCC / Clang commands

```bash
g++ -std=c++20 -E test.cpp -o test.ii
g++ -std=c++20 -S test.cpp -o test.s
g++ -std=c++20 -c test.cpp -o test.o
g++ test.o -o test
```

For the multi-file demo:

```bash
g++ -std=c++20 -c main.cpp -o main.o
g++ -std=c++20 -c math.cpp -o math.o
g++ -std=c++20 -c player.cpp -o player.o
g++ main.o math.o player.o -o game
```

Omit `player.o` to produce a linker error.

## Visual Studio Developer PowerShell

```powershell
cl /nologo /std:c++20 /EHsc /c main.cpp math.cpp player.cpp
link /nologo /OUT:game.exe main.obj math.obj player.obj
```
