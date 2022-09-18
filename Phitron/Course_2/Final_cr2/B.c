#include <stdio.h>
#include <string.h>
int main()
{
    char str[51];
    scanf("%s", str);
    int len = strlen(str);
    int a = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a')
        {
            a++;
        }
    }
    printf("%d", a + 1);
}