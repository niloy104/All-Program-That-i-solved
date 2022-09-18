#include <bits/stdc++.h>
using namespace std;
void permutation(string ch, string ans)
{
    if (ch.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < ch.length(); i++)
    {
        char s = ch[i];
        string ros = ch.substr(0, i) + ch.substr(i + 1);
        permutation(ros, ans + s);
    }
}
int main()
{
    string ch;
    cin >> ch;
    cout << endl;
    string ans;
    permutation(ch, ans);
    return 0;
}