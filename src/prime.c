#include <stdbool.h>
#include <stdio.h>
#include "prime.h"

// Check for primality of a given number: use <stdbool> to get bool type
bool prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    // Check for factors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;  // Return false if num is divisible by i (not prime)
        }
    }

    return true;  // Return true if no factors are found (prime)
}
