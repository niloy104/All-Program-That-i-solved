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

    int a, b;
    cin >> a >> b;
    cout << max(a, b);
    return 0;
}
