#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch > 47 && ch < 58)
    {
        cout << "IS DIGIT" << endl;
    }
    if (ch > 64 && ch < 91)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    if (ch > 96 && ch < 123)
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
}