#include<iostream>
using namespace std;

class student
{
public:
    const int addFee;
    const int examFee;
    student(int x,int y)
        : addFee(x),examFee(y)
    {
        cout<<addFee<<endl;
        cout<<examFee<<endl;
    }
};

int main()
{
    student s1(15000,500);

}
