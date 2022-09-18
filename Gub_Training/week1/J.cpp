//Accepted......
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;
        int lastDigit = (str.length()) - 1;
        if (str[lastDigit] == 'y')
        {
            str = str.erase(lastDigit, 1);
            str = str.insert(lastDigit, "ies");
            cout << str << endl;
        }
        else if (str[lastDigit] == 'e' && str[lastDigit - 1] == 'f')
        {
            str = str.erase(lastDigit - 1, 2);
            str = str.insert(lastDigit - 1, "ves");
            cout << str << endl;
        }
        else if (str[lastDigit] == 'f')
        {
            str = str.erase(lastDigit, 1);
            str = str.insert(lastDigit, "ves");
            cout << str << endl;
        }
        else if (str[lastDigit] == 'h' && str[lastDigit - 1] == 'c' || str[lastDigit] == 'x' || str[lastDigit] == 's' || str[lastDigit] == 'o')
        {
            str = str.insert(lastDigit + 1, "es");
            cout << str << endl;
        }
        else
        {
            str = str.insert(lastDigit + 1, "s");
            cout << str << endl;
        }
    }
}