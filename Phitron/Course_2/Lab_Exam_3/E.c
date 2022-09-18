//Accepted......
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[101];
    scanf("%s", str);
    int alph[26] = {};
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')

        {
            str[i] = str[i] - 32;
        }
    }
    for (int i = 0; i < n; i++)
    {
        alph[str[i] - 65] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        cnt = cnt + alph[i];
    }

    if (cnt == 26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}