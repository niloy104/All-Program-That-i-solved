#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a < b && a < c && b > c)
    {
        cout << a << endl;
        cout << c << endl;
        cout << b << endl;
    }

    else if (a < b && a < c && b < c)
    {

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }

    else if (b < a && b < c && c > a)
    {

        cout << b << endl;
        cout << a << endl;
        cout << c << endl;
    }

    else if (b < a && b < c && c < a)
    {

        cout << b << endl;
        cout << c << endl;
        cout << a << endl;
    }

    else if (c < a && c < b && a > b)
    {

        cout << c << endl;
        cout << b << endl;
        cout << a << endl;
    }

    else if (c < a && c < b && a < b)
    {

        cout << c << endl;
        cout << a << endl;
        cout << b << endl;
    }
    cout << endl;
    cout << a << endl
         << b << endl
         << c << endl;
}
