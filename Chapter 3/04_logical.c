#include <stdio.h>

int main()
{
    int a, b;
    a = 1;
    b = 1;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a and b is %d\n", a || b);
    printf("The value of a is %d\n", !a);

    if (a && b)
    {
        printf("Both are true\n");
    }
    if (a)
    {
        if (b)
        {
            printf("Both are true\n");
        }
    }

    return 0;
}