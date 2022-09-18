#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string c;
        cin >> c;
        int length = s.length();
        int temp = -1;
        for (int i = 0; i < length; i++)
        {
            if (s[i] == c[0])
            {
                temp = i + 1;
               
            }
        }
        cout << temp << endl;
    }
}
