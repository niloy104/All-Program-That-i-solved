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

int main()
{
    OPT;
    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        mp[str1] = str2;
    }
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a;
        b = mp[a];
        int sz1 = a.length();
        int sz2 = b.length();
        if (sz1 > sz2)
        {
            str.push_back(b);
        }
        else if (sz1 < sz2)
        {
            str.push_back(a);
        }
        else
        {
            str.push_back(a);
        }
    }

    for (auto u : str)
    {
        cout << u << " ";
    }
}