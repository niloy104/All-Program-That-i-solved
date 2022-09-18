#include <stdio.h>

int main()
{
    int i = 0, j, len = 0;
    char a[20], b[20];
    printf("Enter a string for a: ");
    gets(a);
    printf("string of a: ");
    puts(a);
    while (a[i] != '\0')
    {
        i++;
        len++;
    }
    for (j = 0, i = len - 1; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    printf("Reverse string is : ");
    puts(b);
    printf("%s", b);
    return 0;
}
