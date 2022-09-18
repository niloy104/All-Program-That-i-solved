#include <bits/stdc++.h>
using namespace std;
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define endl '\n';
int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.rbegin(), v.rend());

    for (auto u : v)
    {
        cout << u.first << " " << u.second << endl;
    }

    for(int i=0;i<k;i++)
    {
        
    }
}