//Time limit exceeded
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long a, b;
    while (t--)
    {
        cin >> a >> b;

        if (a < 0 || b < 0)
        {
            cout << "NO" << endl;
            break;
        }
        if (a == 0 && b == 0)
        {
            cout << "YES" << endl;
            break;
        }
        if (a > b)
        {
            a = a - 2;
            b = b - 1;
        }
        else
        {
            a = a - 1;
            b = b - 2;
        }
    }
}