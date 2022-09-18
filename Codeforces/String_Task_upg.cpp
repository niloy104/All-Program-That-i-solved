//Accepted
#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{

    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
        {
            str.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << "." << str[i];
    }
}