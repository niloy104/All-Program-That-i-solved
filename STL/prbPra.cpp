#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long> v = {1, 1011111111, 260000000, 1011111111, 1011111111, 1011111111};
    map<long long, int> cnt;
    for (int i = 0; i < v.size(); i++)
    {
        cnt[v[i]]++;
    }
    for (auto u : cnt)
    {
        cout << u.first << " : " << u.second << endl;
    }
}