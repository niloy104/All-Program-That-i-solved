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
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        int j = 0;
        for (int i = 1; i <= n; i = i + 2)
        {
            int a = i;
            int b = a + 1;
            int ng = 0;
            int tmp1 = (a + k) * b;
            int tmp2 = (b + k) * a;
            if (tmp1 % 4 == 0)
            {
                v.push_back(make_pair(a, b));
            }
            else
            {
                ng++;
            }

            if (tmp2 % 4 == 0)
            {
                v.push_back(make_pair(b, a));
            }
            else
            {
                ng++;
            }

            if (ng == 2)
            {
                break;
            }

            j++;
        }
        if (j == n / 2)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << v[i].first << " " << v[i].second << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}