//Acceptd..
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
        string str1, str2;
        cin >> str1 >> str2;

        string str = str1 + str2;

        sort(str.begin(), str.end());
        int sz = unique(str.begin(), str.end()) - str.begin();
        cout << sz - 1 << endl;
    }
}
