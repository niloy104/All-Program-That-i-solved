#include <bits/stdc++.h>
using namespace std;
char upper(char c)
{
    return c - 32;
}
int main()
{
    string str;
    getline(cin, str);
    int x = 0;
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = upper(str[i]);
    }
    cout << str;
}