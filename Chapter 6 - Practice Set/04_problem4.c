#include <stdio.h>

int change_to_ten_times(int*);

int change_to_ten_times(int* x)
{
    return *x = *x * 10;
}
int main()
{
    int a = 45;
    printf("The value of a is %d\n", a);
    change_to_ten_times(&a);
    printf("The value of a is %d\n", a);

    return 0;
}