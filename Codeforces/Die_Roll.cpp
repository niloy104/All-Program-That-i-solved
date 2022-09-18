//Accepted.......
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, w;
    cin >> y >> w;
    string str[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int mx = max(y, w);
    cout<<str[mx]<<endl;
}