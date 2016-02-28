
#include "Person.h"
#include <string>
class Tweeter : public Person
{

public:
    std::string twitterhandle;
    Tweeter(std::string first,
            std::string last,
            int arbitrary,
            std::string handle);
    ~Tweeter();
};

