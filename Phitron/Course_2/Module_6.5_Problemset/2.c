#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int def = abs(a - b);
    if (a == 5 || b == 5 || def == 5 || (a + b) == 5)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}