// Accepted.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int a = 0;
    int mx = 0;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == str[i + 1])
        {
            a++;
        }
        if (mx < a)
        {
            mx = a;
        }
        if (str[i] != str[i + 1])
        {
            a = 0;
        }
    }
    cout << mx + 1 << endl;
}