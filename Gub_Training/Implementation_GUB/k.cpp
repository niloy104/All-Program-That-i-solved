//Circle in Square........Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i = 0;
    double pi = 2 * acos(0.0);
    while (t--)
    {
        double r;
        cin >> r;

        double circle = pi * r * r;

        double square = 2 * r * 2 * r;

        cout << "Case " << ++i << ": " << fixed << setprecision(2) << square - circle << endl;
    }
}