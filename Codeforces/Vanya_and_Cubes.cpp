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
    int n;
    cin >> n;
    int i = 1, sum = 0, ans = 0, x = 0;
    while (1)
    {
        sum = sum + i;
        x = x + sum;
        if (x <= n)
        {
            ans++;
        }
        else
        {
            break;
        }
        i++;
    }
    cout << ans;
}

int main()
{
    OPT;
    niloy();
}