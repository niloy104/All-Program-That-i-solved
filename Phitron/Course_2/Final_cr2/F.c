//Accepted
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int val = 1;
    while (n--)
    {
        if ((val * 2) > (val + k))
        {
            val = val + k;
        }
        else
        {
            val = val * 2;
        }
    }
    printf("%d\n", val);
}