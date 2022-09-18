#include <bits/stdc++.h>
using namespace std;
int main()
{
   cout << "Wellcome to Currency Converter" << endl;
   cout << "Which one is your current currency" << endl
        << "1.Taka" << endl
        << "2.Ruppe" << endl
        << "3.Dollar" << endl;
   double a;
   cin >> a;
   double amount;
   cout << "Enter your amount" << endl;
   cin >> amount;
   cout << "Now! Which currency do you want?" << endl
        << "1.Taka" << endl
        << "2.Ruppe" << endl
        << "3.Dollar" << endl;
   double b;
   cin >> b;
   if (a == 1 && b == 2)
   {
      cout << "Final amount is: " << amount / 1.5 << " Ruppe" << endl;
   }
   else if (a == 1 && b == 3)
   {
      cout << "Final amount is: " << amount / 80 << " Dolar" << endl;
   }
   else if (a == 2 && b == 1)
   {
      cout << "Final amount is: " << amount * 1.5 << " Taka" << endl;
   }
   else if (a == 2 && b == 3)
   {
      cout << "Final amount is: " << amount / 80 << " Dolar" << endl;
   }
   else if (a == 3 && b == 1)
   {
      cout << "Final amount is: " << amount * 80 << " Taka" << endl;
   }
   else if (a == 3 && b == 2)
   {
      cout << "Final amount is: " << amount * 60 << " Ruppe" << endl;
   }
   return 0;
}