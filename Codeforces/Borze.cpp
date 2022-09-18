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
    string str; // .-.--
    cin >> str;
    string data;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            data.push_back('0');
        }
        else
        {
            if (str[i] == '-' && str[i + 1] == '.')
            {
                data.push_back('1');
            }
            else
            {
                data.push_back('2');
            }
            i++;
        }
    }
    cout << data;
}

int main()
{
    OPT;
    niloy();
}