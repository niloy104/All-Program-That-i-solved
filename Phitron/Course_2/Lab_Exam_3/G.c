//Accepted......
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[100];
        scanf("%s", str);
        int len = strlen(str);
        printf("%c", str[0]);
        for (int i = 1; i < len; i = i + 2)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }
}