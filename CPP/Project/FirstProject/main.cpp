#include <iostream>
#include "firstclass.h"
using namespace std;

int main()
{
    firstclass object;
    firstclass *p=&object;
    p->display();
    return 0;
}
