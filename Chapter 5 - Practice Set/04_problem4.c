#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ....
// febonacci(n) = febonacci(n-1) + febonacci(n-2)

int febonacci(int);

int febonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return febonacci(n - 1) + febonacci(n - 2);
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("The value of febonacci series at %d is %d", n, febonacci(n));
    return 0;
}