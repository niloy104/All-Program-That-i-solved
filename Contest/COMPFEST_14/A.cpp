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
    int a, b;
    cin >> a >> b;
    if (b == 1)
    {
        cout << 1;
        nl;
    }
    else
    {
        cout << a * (b - 1);
    }
    nl;
    bool x=true;
    if(~x)
    {
        yes;
    }
}