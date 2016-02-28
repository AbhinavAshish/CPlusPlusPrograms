#include "Tweeter.h"
#include "Person.h"
#include <iostream>

using std::cout;
using std::string;


Tweeter::Tweeter(std::string first,std::string last,
                 int arbitrary,std::string handle) : Person(first,last,arbitrary),
                twitterhandle(handle)
{
    cout << "constructing" << twitterhandle <<std::endl;

}

Tweeter::~Tweeter(){
    cout << "destructing" << twitterhandle <<std::endl;
}
