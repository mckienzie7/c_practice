*Its test from mckienzie
**Prints words in getchar
*** manually
#include<stdio.h>

int input(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    if (i < n)
    str[i++] = ch;
    str[i] = '\0';
    return i;
}

int main()
{
    char str[50];
    int n = input(str, 12);

    printf("%d %s", n, str);

    return 0;
}
