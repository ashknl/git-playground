#include "factorial.h"

// calculate the factorial of a given number
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1); // use multiplication instead of addition
}
