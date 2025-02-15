#include <stdbool.h>
#include <stdio.h>
#include "prime.h"

// check for the primality of a given number: use <stdbool> to get the bool type
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
            return false; // return false if a factor is found
        }
    }

    return true; // return true if no factors are found
}
