#include "reverse_num.h"

int reverse_num(int num)
{
    int reversedNum = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return reversedNum;
}