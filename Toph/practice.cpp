#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Input ur data: ";
    cin >> str;

    int screen_len = 20;
    int len = str.length();

    int left = (screen_len - len) / 2;
    int right = screen_len - left - len;

    string out_str = string(left, ' ') + str + string(right, ' ');
    cout << out_str;

    return 0;
}