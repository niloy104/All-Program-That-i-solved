#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n;
        cin>>n;
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int max = arr[0];
        for (int i = 0; i < 4; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        cout << max << endl;
    }
}