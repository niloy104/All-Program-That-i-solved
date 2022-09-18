#include <stdio.h>
int min(int a, int b)
{
    int temp;
    if (a > b)
    {
        temp = b;
    }
    else
    {
        temp = a;
    }
    return temp;
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int mn = min(a, b);
    int mn2 = min(mn, c);
    printf("%d", mn2);
}f