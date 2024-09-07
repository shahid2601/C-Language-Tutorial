#include <stdio.h>

int main()
{
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i (j is an character pointer)
    
    float k = 5.232;
    float* k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k);

    printf("The value at j is %d", *j);

    return 0;
}