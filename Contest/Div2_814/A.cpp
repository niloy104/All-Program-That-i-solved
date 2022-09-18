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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if (a % 2 == 0)
        {
            ans = ans + 2;
        }
        else
        {
            ans = ans + 1;
        }
        if (b % 2 == 0)
        {
            ans = ans + 2;
        }
        else
        {
            ans = ans + 1;
        }

        if (ans % 2 == 0)
        {
            cout << "Tonya" << endl;
        }
        else
        {
            cout << "Burenka" << endl;
        }
    }
}