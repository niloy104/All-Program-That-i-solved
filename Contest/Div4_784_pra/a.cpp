//Accepted..
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
void slove()
{
    int n;
    cin >> n;
    if (n < 1400)
        cout << "Division 4\n";
    else if (n < 1600)
        cout << "Division 3\n";
    else if (n < 1900)
        cout << "Division 2\n";
    else if (n >= 1900)
        cout << "Division 1\n";
}
int main()
{
    OPT;
    test
    {
        slove();
    }
}