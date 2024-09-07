#include <stdio.h>

int main()
{
    // char str[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"; // Same as -- char str[] = {'a', 'b', 'c', '\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("Character is %c\n", str[i]);
    }
    
    return 0;
}