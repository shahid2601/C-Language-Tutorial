#include <stdio.h>

int main()
{
    // all non-zero components will be executed excluding 0.
    if (1)
    {
        printf("This if is executed!\n");
    }
    if (2345)
    {
        printf("This if is also executed!\n");
    }
    if (2.74)
    {
        printf("This float if is also executed!\n");
    }
    if ('c')
    {
        printf("This character if is also executed!\n");
    }
    if (0) // this zero condition will not execute.
    {
        printf("This zero is not executable!\n");
    }

    return 0;
}