#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i = 0, c = 0, s = 0, d = 0;
    printf("Input a string: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            c++;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            s++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            d++;
        }

        i++;
    }
    printf("%d capital letter\n", c++);
    printf("%d small letter\n", s++);
    printf("%d digit\n", d++);
    return 0;
}
