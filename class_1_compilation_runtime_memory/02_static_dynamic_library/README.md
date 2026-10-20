# Static and Dynamic Library Demo

Both executables call the same `award_points` function.

- `game_with_static_library` receives the needed library code during linking.
- `game_with_shared_library` depends on a separate shared library at runtime.

CMake places the platform-specific library files in the build directory. On Windows this normally means a `.lib` plus a `.dll` for the shared version. On Linux it normally means `.a` and `.so` files.
