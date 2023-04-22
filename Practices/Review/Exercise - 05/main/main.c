#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int number = getInputNumber();

    if (isFibonacciNumber(&number))
    {
        printf("%d is a Fibonacci number.", number);
    }
    else
    {
        printf("%d isn't a Fibonacci number.", number);
    }

    return 0;
}
