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
        int a, b, c;
        cin >> a >> b >> c;
        cout << (b - c) * a;
        nl;
    }
}