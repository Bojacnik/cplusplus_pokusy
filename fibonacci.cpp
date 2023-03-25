#include <stdio.h>
#include <stdlib.h>

int _fibonacci(int fibonacci)
{
    if (fibonacci == 0) return 0;
    else if (fibonacci == 1) return 1;

    return _fibonacci(fibonacci-1) + _fibonacci(fibonacci-2);
}

int fibonacci(int cyklus)
{
    int fibiho_soucet = _fibonacci(cyklus);
    return fibiho_soucet;
}