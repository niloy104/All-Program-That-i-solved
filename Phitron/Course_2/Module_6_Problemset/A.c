#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i=1;
    while (t--)
    {
        int a, b;
         scanf("%d%d", &a,&b);
         printf("Case %d:%d\n",i,a+b);
    }
}