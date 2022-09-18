//GCD and LCM......GCD and LCM
#include <bits/stdc++.h>
using namespace std;
long long gcd(int a, int b)
{
    while (b != 0)
    {
        long long rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long g = gcd(a, b);
        long l = (a * b) / g;
        cout << g << " " << l << endl;
    }
}