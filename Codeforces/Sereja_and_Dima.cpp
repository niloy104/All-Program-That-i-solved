//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    v.resize(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    int a = 0, b = 0;
    for (int i = 0; i < t; i++)
    {
        if (i % 2 == 0)
        {

            int mx = max(v.front(), v.back());
            a += mx;
            if (mx == v.back())
            {
                v.pop_back();
            }
            else
            {
                v.erase(v.begin());
            }
        }
        else
        {
            int mx = max(v.front(), v.back());
            b += mx;
            if (mx == v.back())
            {
                v.pop_back();
            }
            else
            {
                v.erase(v.begin());
            }
        }
    }
    cout << a << " " << b;
}