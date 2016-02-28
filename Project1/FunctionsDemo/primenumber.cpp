#include "primenumber.h"
# include <iostream>
using std::cout;
using std::string;
using std::endl;

PrimeNumber::PrimeNumber(int val) : value(val)
{
    cout << "constructor has been created with value initialized to " << value <<endl;
}

PrimeNumber::~PrimeNumber()
{
    cout << "Destructing with the value " << value<<endl;

}

int PrimeNumber::findPrime()
{
    int count=0;
    for(int i=2;i<=value;++i){
        count = 0;
        for (int j=2;j<i;j++){
            if (i%j==0){
                count = 1;
            }
        }
        if (count ==0){
            cout<<i<<endl;
        }
   }
   return 0;
}
