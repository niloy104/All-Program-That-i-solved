#include <stdio.h>
int main()
{
    int n, i, result = 1;
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        result = n * i;
        printf("%d x %d = %d", n, i, result);
        printf("\n");
    }

    return 0;
}