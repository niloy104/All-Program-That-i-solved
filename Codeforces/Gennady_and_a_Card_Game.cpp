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
    string str;
    cin >> str;
    string a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    string data = a + b + c + d + e;
    bool check = 0;
    for (int i = 0; i < data.length(); i++)
    {
        if (str[0] == data[i])
        {
            check = 1;
            break;
        }
        else if (str[1] == data[i])
        {
            check = 1;
            break;
        }
    }
    if (check)
    {
        yes
    }
    else
    {
        no
    }
}

int main()
{
    OPT;
    Solve();
}