#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Shahid";
    char s1[20] = "Shahid";
    char s2[20] = "khan";
    // printf("%d\n", strlen(str));

    char target[30];
    strcpy(target, str); // Target now contains "Shahid"
    // printf("%s %s", target, str);

    strcat(s1, s2);
    // printf("%s", s1, s2);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d", a);

    return 0;
}