#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int five = 0, seven = 0;
    int arr[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 5)
        {
            five++;
        }
        else
        {
            seven++;
        }
    }
    if (five == 2 && seven == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}