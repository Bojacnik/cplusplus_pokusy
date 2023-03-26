#include <stdlib.h>

// solving it using recursion is memory inefficient
//TODO: add a function that will solve it dynamically
double largestCommonDivisor(int number1, int number2)
{

    double cislo = number1 % number2;
    if (cislo == 0)
        return number2;

    return largestCommonDivisor(number2, cislo);
}