#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    int n[t];
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i = 1; i <= t; i++)
    {
        if (n[i] % 2 != 0)
        {
            printf("%d\n", (n[i] - 1) / 2);
        }
        else if (n[i] % 2 == 0)
        {
            printf("%d\n",(n[i] / 2) - 1);
        }
    }
}