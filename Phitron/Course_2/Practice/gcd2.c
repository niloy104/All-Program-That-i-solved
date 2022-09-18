#include <stdio.h>
int gcd(int a, int b)
{
    while (a != 0)
    {
        int rem;
        rem = b % a;
        b = a;
        a = rem;
    }
    return b;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d\n", gcd(a, b));
}