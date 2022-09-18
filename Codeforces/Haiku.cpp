//Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, str3;
    getline(cin, str1);
    getline(cin, str2);
    getline(cin, str3);

    int a1 = 0, a2 = 0, a3 = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
        {
            a1++;
        }
    }

    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')
        {
            a2++;
        }
    }

    for (int i = 0; i < str3.length(); i++)
    {
        if (str3[i] == 'a' || str3[i] == 'e' || str3[i] == 'i' || str3[i] == 'o' || str3[i] == 'u')
        {
            a3++;
        }
    }
    if (a1 == 5 && a2 == 7 && a3 == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
