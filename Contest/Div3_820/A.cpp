//Accepted
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
        ll a, b, c;
        cin >> a >> b >> c;
        
        ll x = abs(a - 1);
        ll y = abs(b - c);
        ll z= abs(c-1);
        ll t1=x;
        ll t2=y+z;
      
        if (t1==t2)
        {
            cout << 3;
            nl;
        }
        else if (t1 < t2)
        {
            cout << 1;
            nl;
        }
        else if (t1 > t2)
        {
            cout << 2;
            nl;
        }
    }
}