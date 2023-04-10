#include "library.h"

int getInputNumber()
{
    int number;

    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d", &number);

    return number;
}

bool isFibonacciNumber(const int *number)
{
    if (*number == 0 || *number == 1)
        return true;

    int aux1, aux2;
    int vecRts[] = {1, 1};
    bool rtn = false;

    for (int i = 2; i < *number; i = vecRts[1])
    {
        aux1 = vecRts[0];
        aux2 = vecRts[1];
        vecRts[0] = aux2;
        vecRts[1] = aux1 + aux2;

        rtn = vecRts[1] == *number;
    }

    return rtn;
}
