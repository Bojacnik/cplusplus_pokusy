#include <stdio.h>

int _fibonnaci(int fibonnaci)
{
    if (fibonnaci == 0) return 0;
    else if (fibonnaci == 1) return 1;

    return _fibonnaci(fibonnaci-1) + _fibonnaci(fibonnaci-2);
}

int fibonnaci(int cyklus)
{
    int fibbiho_soucet = _fibonnaci(cyklus);
    return fibbiho_soucet;
}

int main()
{
    printf("hello\n");

    int fibnum = 46;
    int fibbiho_soucet = fibonnaci(fibnum);
    printf("%i\n", fibbiho_soucet);

    return 0;
}
