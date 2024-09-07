#include <stdio.h>

int main()
{

    // Using do-while loop:
    // int i, sum;
    // i = 1;
    // sum = 0;
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= 10);
    
    // Using For Loop:
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    
    printf("The sum of first ten natural numbers is %d", sum);
    return 0;
}