//X To The Power Y use function..............
#include <stdio.h>

double calPower(double b,double e)
{
    double result = 1, i;
    for (i = 1; i <= e; i++)
    {
        result = result * b;
    }
    return result;
}

int main()
{
    double base, exp;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exp: ");
    scanf("%lf", &exp);
    
    printf("%.0lf to the power %.0lf is : %.2lf", base, exp, calPower(base,exp));

    return 0;
}