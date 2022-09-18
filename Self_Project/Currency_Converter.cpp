#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Welcome to currency converter" << endl;

    cout << "Select your currency mode:->" << endl;
    cout << "1.Dolar" << endl
         << "2.Rupee" << endl
         << "3.Taka" << endl
         << "4.Pound"<<endl;
    int cm; // cm means currency mode
    cin >> cm;

    int amount;
    cout << "Enter your total amount: ";
    cin >> amount;

    cout << "Select a currency which do you convert your current currency:->" << endl;
    cout << "1.Dolar" << endl
         << "2.Rupee" << endl
         << "3.Taka" << endl
         << "4.Pound"<<endl;
    int cm1;
    cin >> cm1;

    if (cm == 1 && cm1 == 1)
    {
        cout << amount << endl;
    }
    else if (cm == 1 && cm1 == 2)
    {
        cout << amount * 76 << endl;
    }
    else if (cm == 1 && cm1 == 3)
    {
        cout << amount * 81 << endl;
    }
    else if (cm == 1 && cm1 == 4)
    {
        cout << amount / 1.25 << endl;
    }
    else if (cm == 2 && cm1 == 1)
    {
        cout << amount << endl;
    }
}