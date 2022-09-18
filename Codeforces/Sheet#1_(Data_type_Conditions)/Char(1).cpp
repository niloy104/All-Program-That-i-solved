#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch > 64 && ch < 91)
    {
        char ch2 = ch + 32;
        cout << ch2;
    }
    if (ch > 96 && ch < 123)
    {
        char ch1 = ch - 32;
        cout << ch1;
    }
}