#include <stdio.h>

int main()
{
    // int length = 6;
    // int breadth = 3;
    int length, breadth;

    printf("Enter the length\n");
    scanf("%d", &length);

    printf("Enter the breadth\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length * breadth);

    return 0;
}