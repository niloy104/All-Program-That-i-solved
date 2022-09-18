//Accepted..
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long i = 0;
        while (1)
        {
            if (n <= 1)
            {
                break;
            }
            if (n % 6 == 0)
            {
                n = n / 6;
            }
            else
            {
                n = n * 2;
            }
            i++;
        }
        if (n == 1)
        {
            cout << i << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}