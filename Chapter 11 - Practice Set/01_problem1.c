#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(6*sizeof(int));
    ptr [0] = 45;
    ptr [1] = 82;
    ptr [2] = 69;
    ptr [3] = 37;
    ptr [4] = 54;
    ptr [5] = 47;
    printf("%d %d %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4], ptr[5]);

    return 0;
}