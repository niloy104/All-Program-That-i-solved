#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int g = __gcd(a, b);
    int ans = __gcd(g, c);
}