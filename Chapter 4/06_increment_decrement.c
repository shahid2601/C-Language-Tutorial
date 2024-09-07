#include <stdio.h>

int main()
{
    // i++ prints 'i' first and then increments 'i' (Post Increment Operator)
    // ++i increments 'i' first and then prints 'i' (Post Increment Operator)

    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5;
    printf("The value of i is %d\n", i);

    // printf("The value of i is %d\n", ++i);

    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i); // 11

    i += 4;
    printf("The value of i is %d\n", i);

    return 0;
}