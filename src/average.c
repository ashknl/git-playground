#include <stdio.h>

int average(int numbers[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    // Calculate and return the average
    return (float)sum / n;
}