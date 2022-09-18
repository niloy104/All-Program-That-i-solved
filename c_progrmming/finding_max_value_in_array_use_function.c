#include <stdio.h>
int maxValue(int num[], int n)
{
    int t, i;
    t = num[0];
    for (i = 1; i < n; i++)
    {
        if (num[i] > t)
            t = num[i];
    }
    return (t);
}
int main()
{
    int num[100], n, i;
    printf("How many number do you want : ");
    scanf("%d", &n);
    printf("Input array value : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int m = maxValue(num, n);
    printf("Maximum is : %d",m);
}