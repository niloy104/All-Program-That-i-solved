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

using namespace std;
int main()
{
    OPT;
    test
    {
        int n;
        cin >> n;
        vector<string> str1;
        vector<string> str2;
        vector<string> str3;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            str1.push_back(a);
        }
        vector<string> v2;
        copy(str1.begin(), str1.end(), back_inserter(v2));
        for (int i = 0; i < n; i++)
        {
            string b;
            cin >> b;
            str2.push_back(b);
        }
        for (int i = 0; i < n; i++)
        {
            string c;
            cin >> c;
            str3.push_back(c);
        }
        int x = 0, y = 0, z = 0;
    }
}