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
    int n;
    cin >> n;
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        str.push_back(a);
    }
    map<string, int> cnt;
    for (int i = 0; i < str.size(); i++)
    {
        cnt[str[i]]++;
    }

    pair<string, int> ans;
    int maxValue = INT_MIN;

    for (const auto &entry : cnt)
    {
        if (maxValue < entry.second)
        {
            maxValue = entry.second;
            ans = entry;
        }
    }

    cout << ans.first << endl;
}