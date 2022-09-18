//Accepted
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define OPT                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define nl cout << "\n";
#define yes cout << "YES";
#define no cout << "NO";

using namespace std;

void niloy()
{
    char ch;
    cin >> ch;
    string str;
    cin >> str;
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";

    if (ch == 'R')
    {
        string ans;
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (str[i] == s1[j])
                {
                    ans.push_back(s1[j - 1]);
                }
                else if (str[i] == s2[j])
                {
                    ans.push_back(s2[j - 1]);
                }
                else if (str[i] == s3[j])
                {
                    ans.push_back(s3[j - 1]);
                }
            }
        }
        cout << ans;
    }
    else
    {
        string ans;
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (str[i] == s1[j])
                {
                    ans.push_back(s1[j + 1]);
                }
                else if (str[i] == s2[j])
                {
                    ans.push_back(s2[j + 1]);
                }
                else if (str[i] == s3[j])
                {
                    ans.push_back(s3[j + 1]);
                }
            }
        }
        cout << ans;
    }
}

int main()
{
    OPT;
    niloy();
}