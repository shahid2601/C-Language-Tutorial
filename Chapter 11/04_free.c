#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    ptr [0] = 3;
    ptr [1] = 7;
    free(ptr);
    printf("%d", ptr[0]);

    return 0;
}