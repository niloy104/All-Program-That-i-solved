#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int rev = b - c;
        if (rev > a)
        {
            printf("advertise\n");
        }
        else if (rev < a)
        {
            printf("do not advertise\n");
        }
        else
        {
            printf("does not matter\n");
        }
    }
}