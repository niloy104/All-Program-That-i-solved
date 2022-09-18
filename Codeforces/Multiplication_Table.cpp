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
    ll n, x;
    cin >> n >> x;
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && (i * n) >= x)
        {
            cnt++;
        }
    }
    cout << cnt;
}

int main()
{
    OPT;
    Solve();
}