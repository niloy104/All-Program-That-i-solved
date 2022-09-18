#include <bits/stdc++.h>
using namespace std;

class Employee
{
    //private means below the data of private funtion its private data. Outside of class this data do not execesable;
private:
    int a, b, c;
    //public means bleow the data of public function its public data. Anywhere of Pogram it excesable.
public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};
void Employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    // niloy.a = 134; -->This will throw error as a is private
    Employee niloy;
    niloy.d = 45;
    niloy.e = 34;
    niloy.setdata(43, 46, 87); //declaration
    niloy.getdata();
}