#include <stdio.h>
int main()
{
    int s, t, x;
    scanf("%d%d%d", &s, &t, &x);
    int ch = 0;
    if (s < t)
    {
        printf(s <= x && x < t ? "Yes" : "No") << '\n';
    }
    else
    {
        printf(x < t || s <= x ? "Yes" : "No") << '\n';
    }
}