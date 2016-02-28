//lecture 1 demo
#include "Status.h"
#include "Person.h"
#include "Tweeter.h"
#include<iostream>


using std::cout;

int main(int argc, char *argv[])
{
    Person p1("Abhinav", "Ashish",123);
    {
        Tweeter t1("Kumar", "Ankush",456,"kumar11");
    }
    Status S= Pending;
    S=Approved;
    cout<<S;
    cout << " hello world";
}
