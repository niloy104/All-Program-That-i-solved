#include <bits/stdc++.h>
using namespace std;
int add(int cnt)
{
    int sum1 = 0;
    for (int i = 0; i < cnt; i++)
    {

        sum1 = sum1 + (1 * (pow(10, i)));
    }
    if (cnt > 2)
    {
        return sum1 + 1;
    }
    else
    {
        return sum1;
    }
}
int power(int cnt, int n)
{
    int sum = 0;
    for (int i = 0; i < cnt; i++)
    {

        sum = sum + (n * (pow(10, i)));
    }
    if (cnt > 2)
    {
        return sum + 1;
    }
    else
    {
        return sum;
    }
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
    int a = add(cnt);
    int k = power(cnt, n);
    if (k < temp)
    {
        cout << k + a;
    }
    else
    {
        cout << k;
    }
}