#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int sum1 = a + b;

    int sum2 = a + c;

    int sum3 = b + c;

    int ans = (sum1 < sum2) ? sum1 : sum2;
    int min = (sum3< ans) ? sum3 : ans;

    printf("%d\n", min);
}