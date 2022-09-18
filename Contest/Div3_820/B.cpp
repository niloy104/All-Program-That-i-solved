// Accepted
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define OPT                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";

using namespace std;
int main()
{

    test
    {
        int a;
        cin >> a;
        string str;
        cin >> str;
        reverse(str.begin(), str.end());
        int n = str.length();
        string data;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {

                string s = str.substr(i + 1, 2);
                reverse(s.begin(), s.end());
                int num = std::stoi(s);
                num = num + 96;
                char ch = (char)num;
                data.push_back(ch);
                str.erase(i + 1, 2);
                n = n - 2;
            }
            else
            {
                string s;
                s.append(1, str[i]);
                int num = std::stoi(s);
                num = num + 96;
                char ch = (char)num;
                data.push_back(ch);
            }
        }
        reverse(data.begin(), data.end());
        cout << data << endl;
    }
}