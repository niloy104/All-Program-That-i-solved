#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define OPT                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define nl cout << "\n";
#define yes cout << "YES";
#define no cout << "NO";

using namespace std;

void niloy()
{
    string str;
    cin >> str;
    int a = str.length() - 1;
    if (a == 1 || a % 2 != 0)
    {
        str.push_back('a');
    }
    else
    {
        str.pop_back();
    }
    int screen_len = 20;
    int len = str.length();

    int left = (screen_len - len) / 2;
    int right = screen_len - left - len;

    cout << string(left, ' ') + str + string(right, ' ');
}

int main()
{
    OPT;
    tc
    {
        niloy();
        nl
    }
}