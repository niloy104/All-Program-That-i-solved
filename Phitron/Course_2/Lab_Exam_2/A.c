#include <stdio.h>
int main()
{
    int n, k, a;
    scanf("%d%d%d", &n, &k, &a);
    int x = a;
    for (int i = x; i <= k; i++)
    {

        if (a == n)
        {
            a = 0;
        }
        a++;
    }
    printf("%d\n", a);
}