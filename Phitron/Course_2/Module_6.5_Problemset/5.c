#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    while (n--)
    {
        int x;
        scanf("%d",&x);
        if(x%2==0)
        {
            sum=sum+x;
        }
    }
    printf("%d",sum);
    
}