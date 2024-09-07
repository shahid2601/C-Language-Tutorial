#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a+b+c)/3.0;
}

int main()
{
    int a, b, c;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);

    printf("The average of a, b, and c is %f\n", average(a, b, c));

    return 0;
}