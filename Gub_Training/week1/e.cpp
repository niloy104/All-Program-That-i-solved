// Aceepted
#include <bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    int n, p = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        p = (p * 2) % m;
    }
    cout << p;
}