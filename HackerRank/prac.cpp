#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < 2 * n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < 2 * n; i += 2)
    {
        sum = sum + v[i];
    }
    cout << sum << "\n";
}