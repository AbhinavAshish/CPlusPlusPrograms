#ifndef PRIMENUMBER_H
#define PRIMENUMBER_H
// Class to find out all the numbers that are prime smaller than the given number


class PrimeNumber

{
private:
    int value;

public:
    PrimeNumber(int number);
    ~PrimeNumber();
    int findPrime();
};

#endif // PRIMENUMBER_H
