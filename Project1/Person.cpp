#include "Person.h"
#include <iostream>
using std::cout;
using std::string;

Person::Person(std::string first,std::string last,
               int arbitrary) : firstname(first), lastname(last),arbitrarynumber(arbitrary)
{
    cout << "constructing" <<  firstname <<" "<< lastname<<std::endl;
}

Person::~Person()
{
    cout << "destructing" <<  firstname <<" "<< lastname<<std::endl;
}
