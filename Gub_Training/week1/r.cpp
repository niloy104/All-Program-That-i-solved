#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, str1, str2, str4, str3;
    cin >> str;
    // cout << str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] = '.')
        {
            str1 = str.substr(1, i);
            break;
        }
    }
    cout << str1;
}