//Accepted
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);
    int c = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == str[i + 1])
        {
            c++;
        }
    }
    printf("%d", c);
}