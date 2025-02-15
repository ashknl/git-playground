#include "count_char.h"
#include <stdio.h>

int count_char(char *a)
{
    int count = 0;
    while (a[count] != '\0')
    {
        count = count + 1;
    }
    return count;
}