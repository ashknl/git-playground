#include "factorial.h"

// Calculate the factorial of a given number
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1); 
}
