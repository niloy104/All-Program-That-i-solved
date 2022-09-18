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

#define endl cout << "\n";
#define yes cout << "YES";
#define no cout << "NO";

using namespace std;
int main()
{
    OPT;
    test
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        int sz = unique(str.begin(), str.end()) - str.begin();
        int x = n - sz;
        cout << (sz * 2) + x;
        endl;
    }
}