// Young Physicist
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        sum = sum + a;
    }
    if (sum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}