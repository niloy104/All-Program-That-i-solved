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

    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int x = abs(a - b);
        if (a == b || x % 2 == 0)
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
    }
}