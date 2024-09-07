#include <stdio.h>

int main()
{
    int a, b, c;
    a = 2;
    b = 4;
    c = 6;

    printf("The value is %d\n", a*b/c);
    printf("The value is %d", (3*c)/(2*b) + (7*a));
    
    // (3*c)/(2*b) + (7*a)
    // 18/8 + 14
    // 2 + 14
    // 16

    return 0;
}