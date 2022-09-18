//Accepted
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    while (n--)
    {
        int p, q;
        scanf("%d%d", &p, &q);
        int a = q - p;
        if (a >= 2)
        {
            i++;
        }
    }
    printf("%d\n", i);
}