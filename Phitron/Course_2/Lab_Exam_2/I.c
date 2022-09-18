//Accepted
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 90)
    {
        printf("expert\n");
    }
    else if (n > 69 && n < 90)
    {
        printf("%d\n", 90 - n);
    }
    else if (n > 39 && n < 70)
    {
        printf("%d\n", 70 - n);
    }
    else
    {
        printf("%d\n", 40 - n);
    }
}