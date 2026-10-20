#pragma once

// A declaration tells the compiler that this function exists.
// The function body is deliberately kept in math.cpp.
int add(int left, int right);

// An inline function may be defined in a header.
// Every source file that includes this header can see the full definition.
inline int square(int value)
{
    return value * value;
}
