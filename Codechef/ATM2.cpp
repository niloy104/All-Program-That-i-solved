#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char str[n + 1] = {0};
        int i = 0;
        while (n--)
        {
            bool check = 0;
            int a;
            cin >> a;
            if (k >= a)
            {
                k = k - a;
                str[i] = '1';
            }
            else
            {
                str[i] = '0';
            }
            ++i;
        }
        cout << str << endl;
    }
}