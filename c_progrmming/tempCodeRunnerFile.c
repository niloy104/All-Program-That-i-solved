#include <stdio.h>
int main()
{
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if (x2 > x1)
    {
        if (v2 < v1)
        {
            int t = x2 - x1;
            int t1 = v1 - v2;
            if (t % t1 == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        if (v1 > v2)
        {
            int t = x1 - x2;
            int t1 = v2 - v1;
            if (t % t1 == 0)
                printf("YES");
            else
            {
                printf("NO");
            }
        }
        else if (x1 == x2 && v1 == v2)
        {
            printf("YES");
        }
        else
            printf("NO");
    }
    return 0;
}
