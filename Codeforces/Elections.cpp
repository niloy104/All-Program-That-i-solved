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

int niloy(int a, int b, int c)
{
    return max(0, max(b, c) + 1 - a);
}

int main()
{
    OPT;

    tc
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << niloy(a, b, c) << " " << niloy(b, a, c) << " " << niloy(c, a, b);
        nl
    }
}