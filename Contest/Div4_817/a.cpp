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
        int n;cin>>n;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        if (str == "Timru")
        {
            yes;
        }
        else
        {
            no;
        }
    }
}