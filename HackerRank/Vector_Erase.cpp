//Accepted.......
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int x;
    cin >> x;
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + (x - 1));
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
    int l = v.size();
    cout << l << "\n";
    for (int i = 0; i < l; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
