#pragma once
#include <string>

class Person
{
private:
    std::string firstname;
    std::string lastname;

public:
    int arbitrarynumber;
    Person (std::string first,
            std::string last,
            int arbitrary
            );
    ~Person();

};
