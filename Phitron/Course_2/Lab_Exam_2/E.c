#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, x, ta = 0, ao = 0;
    scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &x);

    for (int i = 0; i < x; ++i)
    {
        int t1 = i % (a + c);
        if (t1 < a)
        {
            ta = ta + b;
        }
        int t2 = i % (d + f);
        if (t2 < d)
        {
            ao = ao + e;
        }
    }
    if (ta > ao)
    {
        printf("Takahashi\n");
    }
    else if (ta < ao)
    {
        printf("Aoki\n");
    }
    else
    {
        printf("Draw\n");
    }
}