// Accepted......
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
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll cnt = 1, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] < v[i])
        {
            cnt++;
        }
        else
        {
            ans = max(cnt, ans);
            cnt = 1;
        }
    }
    cout << max(ans, cnt);
}

int main()
{
    OPT;
    Solve();
}