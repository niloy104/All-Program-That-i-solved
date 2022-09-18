//Divide it!........Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        long long n;
        cin >> n;
        while (1)
        {
            if (n == 1)
            {
                cout << count << endl;
                break;
            }
            else if (n % 2 == 0)
            {
                count++;
                n = n / 2;
            }
            else if (n % 3 == 0)
            {
                count++;
                n = (2 * n) / 3;
            }
            else if (n % 5 == 0)
            {
                count++;
                n = (4 * n) / 5;
            }
            else
            {
                cout << -1 << endl;
                break;
            }
        }
    }
}