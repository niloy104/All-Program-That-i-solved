#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = a * b * c * d;
    int x = m % 10;
    m = m / 10;
    int y = m % 10;
    cout << y<<x;
}
