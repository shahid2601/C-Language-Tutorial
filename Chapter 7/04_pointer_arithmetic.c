#include <stdio.h>

int main()
{
    // Pointer Arithmetic Using Integer Pointer
    // int a = 5;
    // int* ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++;
    // printf("The value of a is %u\n", ptr);

    // Pointer Arithmetic Using Character Pointer
    char a = 's';
    char* ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of a is %u\n", ptr);

    return 0;
}