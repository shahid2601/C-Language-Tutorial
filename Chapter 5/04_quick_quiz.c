#include <stdio.h>
#include <math.h>

int main()
{
    int side, area;

    // Prompt the user to enter the side of the square
    printf("Enter the side of the square: ");
    scanf("%d", &side);

    printf("The area of the square is %f\n", pow(side, 2));

    return 0;
}