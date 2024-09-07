#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    if (n == 0 || n == 1) // Base condition
    {
        return 1;
    }
    // Factorial(n) = factorial(n-1) X n
    return factorial(n-1) * n;
}

int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    printf("The factorial is %d\n", factorial(a));

    return 0;
}