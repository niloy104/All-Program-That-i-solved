//Accepted
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

void niloy()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (m < n || k < n)
    {
        no
    }
    else
    {
        yes
    }
}

int main()
{
    OPT;
    niloy();
}