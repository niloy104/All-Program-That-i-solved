#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "How many number do you want?>= ";
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        string op;
        cin >> op;

        if (op == "+")
        {
            a[i] = a[i] + a[i + 1];
        }
        else if (op == "-")
        {
            a[i] = a[i + 1] - a[i];
        }
        else if (op == "*")
        {
            a[i] = a[i] * a[i + 1];
        }
        else if (op == "/")
        {
            a[i] = a[i] / a[i + 1];
        }
    }
    cout << a;
}