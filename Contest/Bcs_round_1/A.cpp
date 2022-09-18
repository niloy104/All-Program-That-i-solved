//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int len = str.length();

        sort(str.begin(), str.end());

        int a = 0, b = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == 'a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a == b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}