// Accepted..
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int cnt = 0, var = -1;
        for (int i = 0; i < n; i++)
        {
            if (cnt == 2)
            {
                var = arr[i];
                break;
            }
            if (arr[i] == arr[i + 1])
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
        }
        cout << var << endl;
    }
}