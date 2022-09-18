#include<bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;

    void display1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class student : public person
{
public:
    int id;
    void display2()
    {
        display1();
        cout<<"Id: "<<id<<endl;
    }
};
int main()
{
    student info;
    info.name="Niloy";
    info.age=21;
    info.id=202;
    info.display2();

}

