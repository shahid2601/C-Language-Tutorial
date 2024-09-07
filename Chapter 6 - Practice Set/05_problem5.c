#include <stdio.h>

int* sum(int, int);
int* sum(int a, int b)
{
    int s = a + b;
    int* ptr = &s;
    printf("The sum of a and b is %d\n", s);
    return ptr;
}

float* average(int, int);
float* average(int a, int b)
{
    float avg = (a + b)/2.0;
    float * ptr = &avg;
    printf("The average of a and b is %f\n", avg);
    return ptr;
}

int main()
{
    int x, y;
    x = 4;
    y = 6;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);
    printf("The address of sum is %u and of average is %u", ptr1, ptr2);

    return 0;
}