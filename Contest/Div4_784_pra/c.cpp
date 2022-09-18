#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define OPT                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{
}
using namespace std;
int main()
{
    OPT;
    test
    {
        int n;
        cin >> n;
        vector<int> v;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(1);
            }
        }
        int a = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[i + 1])
            {
                a++;
            }
            else
            {
                break;
            }
        }

        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != v[i + 1])
            {
                b++;
            }
            else
            {
                break;
            }
        }
        if (a == n || b == n)
        {
            yes;
        }
        else
        {
            no;
        }
    }
}