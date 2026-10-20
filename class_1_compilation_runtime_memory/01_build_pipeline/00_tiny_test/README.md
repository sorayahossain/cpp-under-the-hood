# One tiny C++ program through the build pipeline

The source prints `5`. The generated files in this folder were produced on Linux x86-64 with GCC 14.2. Exact assembly, symbols, sections and dynamic dependencies vary by compiler, operating system, architecture and optimisation settings.

## Commands used

```bash
g++ -std=c++20 -E test.cpp -o test.ii
g++ -std=c++20 -O0 -fno-asynchronous-unwind-tables -fno-stack-protector -S test.cpp -o test.s
g++ -std=c++20 -O0 -c test.cpp -o test.o
g++ test.o -o test
```

Inspection commands:

```bash
readelf -S test.o
nm -C test.o
objdump -drC test.o
ldd ./test
```

On Windows with a Visual Studio Developer PowerShell, the equivalent teaching flow is:

```powershell
cl /nologo /std:c++20 /EHsc /P test.cpp
cl /nologo /std:c++20 /EHsc /FAs /c test.cpp
link /nologo test.obj /OUT:test.exe
```

The `.o` file included here is a Linux ELF relocatable object. It is provided for inspection, not as a portable classroom binary.
