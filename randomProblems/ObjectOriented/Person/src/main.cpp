#include"Person.h"
#include<iostream>
using namespace std;

int main()
{
    Person p(-1);
    p.yearPasses();
    p.amIOld();
    p.yearPasses();
    p.amIOld();
    p.yearPasses();
    p.amIOld();
    p.~Person();

    return 0;

}
