#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>

#include "fibonacci.h"
#include "math.h"

using namespace std;

int main()
{
    int x, y;
    cout << "Enter your two numbers, for which you want to find the largest possible divisor: ";
    cout << std::endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    double number = largestCommonDivisor(x, y);
    cout << "The largest possible divisor for " + std::to_string(x) + " and " + std::to_string(y) + " is " + std::to_string(number);
    return 0;
}

int main3()
{
    double number = largestCommonDivisor(2,4);
    printf("Largest common divisor: %lf", number);
    return 0;
}

int main2()
{
        printf("hello\n");

    int fibnum = 46;
    int fibbiho_soucet = fibonacci(fibnum);
    printf("%i\n", fibbiho_soucet);

    return 0;
}