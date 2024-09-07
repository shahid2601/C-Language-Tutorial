#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float* ptr;
    ptr = (float*) malloc(n * sizeof(float));
    ptr [0] = 34.186;
    ptr [1] = 57.786;
    ptr [2] = 78.281;
    ptr [3] = 62.276;
    ptr [4] = 47.645;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);

    return 0;
}