#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int len = str.length();
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
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