#include <stdio.h>

int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    l = l - 1;
    r = r - 1;
    char str[100000];
    scanf("%s", str);
    char ch;
    ch = str[l];
    str[l] = str[r];
    str[r] = ch;

    printf("%s", str);
}