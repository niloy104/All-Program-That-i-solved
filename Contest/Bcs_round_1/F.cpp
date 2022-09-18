#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;
    int i = 0;
    int len = str.length();

    while (1)
    {
        if (str[i] == '\0' && str.length() != 0)
        {
            cout << "NO\n";
            break;
        }
        if (len == 0)
        {
            cout << "YES\n";
            break;
        }
        if (str[i] != str[i + 1])
        {
            str.erase(i, 2);
        }
    }
    return 0;
}
