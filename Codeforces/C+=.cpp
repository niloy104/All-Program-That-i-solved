//Accepted...
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
    ll a, b, n;
    cin >> a >> b >> n;
    ll sum = 0;
    ll cnt = 0;
    while (1)
    {
        if (a > b)
        {
            b += a;
            sum = b;
            cnt++;
        }
        else
        {
            a += b;
            sum = a;
            cnt++;
        }
        if (sum > n)
        {
            break;
        }
       
    } cout << cnt;
}

int main()
{
    OPT;
    tc
    {
        niloy();nl
    }
}