//Accepted
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ch[n];

    scanf("%s", ch);
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == 'D')
        {
            d++;
        }
        else
        {
            a++;
        }
    }
    if (a > d)
    {
        printf("Anton\n");
    }
    else if (a < d)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
}