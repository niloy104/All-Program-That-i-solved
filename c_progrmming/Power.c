//X To The Power Y
#include <stdio.h>
int main()
{
    double base, exp, result = 1, i;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exp: ");
    scanf("%lf", &exp);
    for (i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    printf("%.0lf to the power %.0lf is : %.2lf", base, exp, result);

    return 0;
}