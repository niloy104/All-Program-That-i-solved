// IQ test....Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, n;
    cin >> n;
    int index1 = 0, index2 = 0;

    int num[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];

        if (num[i] % 2 == 0)
        {
            a++;
            index1 = i;
        }
        else if (num[i] % 2 != 0)
        {
            b++;
            index2 = i;
        }
    }

    if (a < b)
    {
        cout << index1 << endl;
    }
    else if (a > b)
    {
        cout << index2 << endl;
    }
}