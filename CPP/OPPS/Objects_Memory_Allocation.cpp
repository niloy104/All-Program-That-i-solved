#include <bits/stdc++.h>
using namespace std;

class shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void)
{
    cout << "Enter id of your item no " << counter + 1 << " :";
    cin >> itemID[counter];
    cout << "Enter price your item: ";
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dokan;
    dokan.initCounter();
    int n;
    cout << "How many item do you have: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dokan.setPrice();
    }

    dokan.displayPrice();
}