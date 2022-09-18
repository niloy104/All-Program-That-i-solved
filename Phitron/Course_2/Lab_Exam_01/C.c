//Negative number counts..........
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int ans = 0;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n < 0)
        {
            ans++;
        }
    }
    printf("%d\n", ans);
}