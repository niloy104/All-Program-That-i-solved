#include <stdio.h>
int main()
{
    long long int n, ar[10], i, sum = 0;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    for (i = 1; i <= n; i++)
    {
        sum = sum + ar[i];
    }
    printf("%lld", sum);
    return 0;
}