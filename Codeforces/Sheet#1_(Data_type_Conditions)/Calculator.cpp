#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a;
    char s;
    cin >> s;
    cin >> b;
    switch (s)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    }
}
