#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a + b) > 9)
    {
        printf("error\n");
    }
    else
    {
        printf("%d\n", a + b);
    }
}