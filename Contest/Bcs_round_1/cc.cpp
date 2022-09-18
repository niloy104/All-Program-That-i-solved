#include <bits/stdc++.h>
using namespace std;
int power(int cnt, int n)
{
    int sum = 0;
    for (int i = 0; i < cnt; i++)
    {

        sum = sum + (n * (pow(10, i)));
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int cnt = 1;

    while (n > 10)
    {
        ++cnt;
        n = n / 10;
    }
    int a = power(cnt, n + 1);
    int k = power(cnt, n);
    if (k < temp)
    {
        cout << a;
    }
    else
    {
        cout << k;
    }
}