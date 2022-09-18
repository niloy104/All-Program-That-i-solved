#include <stdio.h>
#include <math.h>
int main()
{
    double n, m, a, temp1, temp2;
    scanf("%lf %lf %lf", &n, &m, &a);

    temp1 = ceil(n / a);
    temp2 = ceil(m / a);
    printf("%.0lf\n", temp1 * temp2);
    return 0;
}