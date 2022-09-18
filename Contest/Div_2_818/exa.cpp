#include <bits/stdc++.h>
using namespace std;
long long gcd(long a, long b)
{
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n;
        cin >> n;
        int arr[n] = {0};
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                v.push_back(make_pair(i, j));
            }
        }
        int cnt = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int x = gcd(v[i].first, v[i].second);
            int y = v[i].first * v[i].second;
            int z = y / x;
            if ((z / x) <= 3)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
