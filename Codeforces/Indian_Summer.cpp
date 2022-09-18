//Accepted
#include <bits/stdc++.h>
using namespace std;
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define endl '\n';
int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    int sz = unique(v.begin(), v.end()) - v.begin();
    cout << sz;
}