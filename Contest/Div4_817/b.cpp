#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define OPT                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";

using namespace std;
int main()
{
    OPT;
    test
    {
        int n;
        cin >> n;
        string str1;
        cin >> str1;
        string str2;
        cin >> str2;

        for (int i = 0; i < n; i++)
        {
            if (str1[i] == 'R')
            {
                str1[i] = '1';
            }
            else
            {
                str1[i] = '0';
            }
            if (str2[i] == 'R')
            {
                str2[i] = '1';
            }
            else
            {
                str2[i] = '0';
            }
        }
        if (str1 == str2)
        {
            yes;
        }
        else
        {
            no;
        }
    }
}