#include <stdio.h>

// calculate the average of a given array of integers. Do not return a float: since the test cases expect the output to be an integer
int average(int numbers[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    // Calculate and return the average
    return sum / n;
}