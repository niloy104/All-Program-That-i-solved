// Harmony......Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    if (sum % 2 != 0)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << (a + b) / 2 << endl;
    }
}