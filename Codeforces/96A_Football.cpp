//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char num[101];
    cin >> num;
    int i = 0;
    int count = 0;
    while (num[i] != '\0')
    {
        if (num[i] == num[i + 1])
        {
            count++;
        }
        else
        {
            if (count >= 6)
            {
                break;
            }
            else
            {
                count = 0;
            }
        }
 
        i++;
    }
    if (count >= 6)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}