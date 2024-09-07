#include <stdio.h>

int main()
{
    int a, b, c, d, greatest;
    printf("Enter the four numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d)
    {
        greatest = a;
    }
    else if (b>a && b>c && b>d)
    {
        greatest = b;
    }
    else if (c>b && c>a && c>d)
    {
        greatest = c;
    }
    else
    {
        greatest = d;
    }
    printf("The greatest number is %d", greatest);
    
    return 0;
}