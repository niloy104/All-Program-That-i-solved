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
        string str;
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        if (str == "YES")
        {
            yes;
            endl;
        }
        else
        {
            no;
            endl;
        }
    }
}