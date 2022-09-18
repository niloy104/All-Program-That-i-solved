// Time limit exceeded
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long n, m, i = 1;

    while (t--)
    {
        cin >> n >> m;
        cout << "Case " << i << ": " << m * (n / 2) << endl;
        i++;
    }
}
