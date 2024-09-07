#include <stdio.h>

int main()
{
    int i, sum;
    i = 1;
    sum = 0;

    while (i <= 10)
    {
        sum += i; // same as -- sum = sum + i;
        i++;
    }
    printf("The sum of first ten natural numbers is %d", sum);

    return 0;
}