#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character: \n");
    scanf("%c", &ch);

    if (ch>=97 &&  ch<= 122)
    {
        printf("The character is lowercase\n");
    }
    else
    {
        printf("The character is not lowercase\n");
    }
    printf("The value of character is %d", ch);

    return 0;
}