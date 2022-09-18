// Accepted
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define OPT                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define nl cout << "\n";
#define yes cout << "YES";
#define no cout << "NO";

using namespace std;

void Solve()
{
    ll l, r;
    cin >> l >> r;
    ll x = 0, y = 0;
    if (l * 2 <= r)
    {
        x = l;
        y = l * 2;
    }
    else
    {
        x = -1;
        y = -1;
    }
    cout << x << " " << y;
}

int main()
{
    OPT;
    tc
    {
        Solve();
        nl
    }
}