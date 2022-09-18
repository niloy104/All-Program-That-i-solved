//Accepted
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
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            a++;
        }
        else if (str[i] == 'B')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if ((a + c) == b)
    {
        yes
    }
    else
    {
        no
    }
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