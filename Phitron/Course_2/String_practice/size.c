#include <stdio.h>
int main()
{
    char str[] = "This is Niloy.";
    int sz = sizeof(str) / sizeof(str[0]);
    printf("%d\n", sz);
    for (int i = 0; i < sz; i++)
    {
        printf("%d -> %c (ASCII = %d)\n", i, str[i], str[i]);
    }
}