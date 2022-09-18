//Accepted
#include <stdio.h>
int main()
{
    int a, b;
    scanf(" %d%d", &a, &b);
    if (a <= b)
    {
        printf("%d", (b - a + 1));
    }
    else
    {
        printf("%d", 0);
    }
}
