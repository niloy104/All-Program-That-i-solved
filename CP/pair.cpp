#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p; // decleare pair..
    // p=make_pair(3,"niloy");
    p = {3, "NILOY"};
    pair<int, string> &p1 = p; // pass adrees to one pair to another....
    p1.first = 5;              // intial value manually.....
    // cout << p.first << " " << p.second << endl;
    pair<int, int> p_array[3];
    /* p_array[0] = {1, 2};
     p_array[1] = {3, 4};     //manual input........
     p_array[2] = {5, 6};*/
    for (int i = 0; i < 3; i++)
    {
        cin >> p_array[i].first >> p_array[i].second; // daynamic input......
    }
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl; // print array of pair....
    }
}