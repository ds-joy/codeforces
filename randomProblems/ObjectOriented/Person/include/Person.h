#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;


class Person
{
    public:
        Person(int initialAge);
        void yearPasses();
        void amIOld();
        virtual ~Person();
        int age;
};


#endif // PERSON_H
