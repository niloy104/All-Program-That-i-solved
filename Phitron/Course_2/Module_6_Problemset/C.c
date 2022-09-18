#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int n;

    scanf("%d", &n);
    int t = n * x;
    int sum = 0;
    while (n--)
    {
        int num;
        scanf("%d", &num);
        sum = sum + num;
    }
    int ans = (t - sum) + x;
    printf("%d\n", ans);
}