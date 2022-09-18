//Accepted
#include <bits/stdc++.h>
using namespace std;
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define endl '\n';
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = (a + b) / 2;
        int y = (a + c) / 2;
        int z = (b + c) / 2;

        if (x < 35 || y < 35 || z < 35)
        {
            cout << "Fail" << endl;
        }
        else
        {
            cout << "Pass" << endl;
        }
    }
}
