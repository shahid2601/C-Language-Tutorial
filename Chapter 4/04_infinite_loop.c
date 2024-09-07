#include <stdio.h>

int main()
{
    int i = 0;
    // while (1 < 10) instead of 'i' use non-zero no. to create infinite loop.
    while (i < 10)
    {
        printf("The value is %d\n", i);
        // i++; -- removing this will create infinite loop
    }

    return 0;
}