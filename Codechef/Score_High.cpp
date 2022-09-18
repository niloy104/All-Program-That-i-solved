#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n;
        cin >> n;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mx = max(a, max(b, max(c, d)));
        cout << mx << endl;
    }
}