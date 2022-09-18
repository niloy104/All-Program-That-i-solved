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

    int n;
    cin >> n;
    while (n--)
    {
        int n, m;
        cin >> n >> m;
        int x = n / m;
        int y = x * m;
        int z = n - y;

        if (z == 0 && x % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}