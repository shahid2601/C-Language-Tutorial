#include <stdio.h>

int main()
{
    char str[7];
    // scanf("%s", str);
    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[6] = '\0';
    printf("%s", str);

    return 0;
}