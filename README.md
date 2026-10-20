# C++ Under the Hood

Two classes, one independently runnable example per main function.

Use CMake to build the examples separately.

Do not merge all .cpp files into a single target.

```sh
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --parallel
```

On multi-configuration generators such as Visual Studio, add `--config Debug` to
the build command.

The .exe files then normally live in a Debug subfolder.

macOS/Linux was tested in this revision.

MSVC/Windows was not tested.
