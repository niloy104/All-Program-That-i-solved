#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sum = 0, sum1 = 0, sum2 = 0;
        int n;
        cin >> n;
        int m1;
        int i = 1;
        int m;
        while (n > 0)
        {
            if (i == 4)
            {
                break;
            }

            m = n % 10;
            sum1 = sum1 + m;
            n = n / 10;
            i++;
        }
        int n1 = n;
        while (n1 > 0)
        {
            m1 = n1 % 10;
            sum2 = sum2 + m1;
            n1 = n1 / 10;
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}