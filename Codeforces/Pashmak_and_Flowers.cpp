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
    ll n;
    cin >> n;
    vector<int> v;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll max = *max_element(v.begin(), v.end());
    ll min = *min_element(v.begin(), v.end());
    ll sz1 = 0, sz2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == max)
        {
            sz1++;
        }
        else if (v[i] == min)
        {
            sz2++;
        }
    }
    if (min == max)
    {
        cout << max - min << " " << n * (n - 1) / 2;
    }
    else
    {
        cout << max - min << " " << sz1 * sz2;
    }
}

int main()
{
    OPT;
    Solve();
}