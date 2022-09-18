#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 3 == 0 && a % 7 == 0)
    {
        printf("NO\n");
    }
    else if (a % 3 == 0 || a % 7 == 0)
    {
        printf("YES\n");
    }
}