#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        double result = sqrt(n);
        printf("%0.lf\n", result);
    }
    return 0;
}