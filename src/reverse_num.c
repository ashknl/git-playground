#include "reverse_num.h"

int reverse_num(int num)
{
    int reversedNum = 0, remainder;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 1 + remainder;
        num /= 10000;
    }

    return reversedNum;
}