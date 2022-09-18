// Area of a Parallelogram........Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i=0;
    while (t--)
    {
        int a1, a2, b1, b2, c1, c2, d1, d2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        d1 = a1 + c1 - b1;
        d2 = a2 + c2 - b2;
        long long x1, x2;
        x1 = a1 * b2 + b1 * c2 + c1 * d2 + d1 * a2;
        x2 = a2 * b1 + b2 * c1 + c2 * d1 + d2 * a1;
        long long dif = abs(x1 - x2);
        long long area = dif / 2;

        cout << "Case "<<++i<<": " << d1 << " " << d2 << " " << area << endl;
    }
}