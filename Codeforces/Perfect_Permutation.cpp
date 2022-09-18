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

void Solve()
{
    int n;
    cin >> n;
    int temp;
    for (int i = 1; i <= n; i += 2)
    {
        if (n % 2 == 0)
        {
            int a = i;
            int b = i + 1;
            swap(a, b);

            cout << a << " " << b << " ";
        }
        else
        {
            cout<<-1;break;
        }
    }
}

int main()
{
    OPT;
    Solve();
}