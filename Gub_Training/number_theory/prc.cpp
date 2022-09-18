#include <bits/stdc++.h>
using namespace std;

#define N 1000000
bool mark[N];

void sieve(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (mark[i] == false)
        {
            for (int j = i + i; j <= n; j = j + i)
            {
                mark[i] = true;
            }
        }
    }
}

int main()
{
}