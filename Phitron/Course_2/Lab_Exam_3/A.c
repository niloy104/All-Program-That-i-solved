// Accepted......
#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s", str);

    int len = strlen(str);
    char temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (str[i + 1] == str[i])
        {
            len--;
        }
    }

    if (len % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}