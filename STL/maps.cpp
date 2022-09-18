#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare map by string index
    map<string, int> id;

    id["Niloy"] = 3;
    id["Shakib"] = 8;
    id["Khadiza"] = 10;
    id["Al-Amin"] = 24;
    id["Adnan"] = 35;

    cout << id["Niloy"] << endl; // Print map value by index

    // decalare map by int index
    map<int, string> mp;
    mp[3] = "Niloy";
    mp[8] = "Shakib";
    mp[10] = "Khadiza";
    mp[24] = "Al-Amin";
    mp[35] = "Adnan";

    cout << mp[10] << endl; // Print map value by index

    // Frequency count in array or vector using map

    vector<long long> v = {1, 2, 5, 3, 5, 6, 3, 5, 3, 5, 7, 3, 2, 1, 2, 3, 5};
    map<long long, int> cnt;
    for (int i = 0; i < v.size(); i++)
    {
        cnt[v[i]]++;
    }
    for (auto u : cnt)
    {
        cout << u.first << " : " << u.second << endl;
    }

    // user input taking in map

    int n;
    cin >> n;
    map<string, int> us;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int a;
        cin >> a;
        us[s] = a;
    }

    // declare vector of maps
    vector<map<string, int>> v;
}
