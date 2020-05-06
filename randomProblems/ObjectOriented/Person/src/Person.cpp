#include "Person.h"

Person::Person(int initialAge)
{
    if(initialAge >= 0)
        age = initialAge;
    else
    {
        age = 0;
        cout << "Age is not valid" << endl;
    }
}

void Person::yearPasses()
{
    age += 1;
}

void Person::amIOld()
{
    if( age < 13)
        cout << "You are young" << endl;
    else if( age >= 13 &&  age <18)
        cout << "You are a teenager" << endl;
    else
        cout << "You are old" << endl;
}

Person::~Person()
{
    delete this;
}
