//Multiplication sum of user input.........
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    double ans = 0;
    while (t--)
    {
        double a, b;
        scanf("%lf%lf", &a, &b);
        double x = a * b;
        ans = ans + x;
    }
    printf("%.3lf\n", ans);
}