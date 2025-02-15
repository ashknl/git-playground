 #include "reverse_num.h"

int reverse_num(int num)
{
    int reversedNum = 0, remainder;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;             // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Shift digits and add the remainder
        num /= 10;                         // Remove the last digit
    }

    return reversedNum;
}
