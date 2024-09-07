#include <stdio.h>

int main()
{
    // 5! = 1 x 2 x 3 x 4 x 5 = 120
    // 0! = 0
    // n! = 1 x 2 x 3 x 4 x 5 ......... x n
    int n;
    int product = 1;

    printf("Enter Number: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    
    printf("The factorial of given number is %d", product);
    return 0;
}