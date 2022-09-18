#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s,c;
        cin >> s;
        cin >> c;
        int length = s.length();
        int temp = -1;
        if (length % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < length; i++)
            {
                if (s[i] == c[0])
                {
                    temp = i + 1;
                }
            }
        }
        if (length == 1 || temp == -1)
        {
            cout << "NO" << endl;
        }
        else if (temp % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
