#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, fact = 1;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("%d\n", fact);
    }
}