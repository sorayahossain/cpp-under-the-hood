#include "math.hpp"

// This is the single ordinary definition of add for the program.
// The linker connects calls to add with this compiled function body.
int add(int left, int right)
{
    return left + right;
}
