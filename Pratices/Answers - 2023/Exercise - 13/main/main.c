#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int *number = getInputNaturalNumber();
    bool *isPrime = isPrimeNumber(number);

    printf("Number %d %s prime.", *number, *isPrime ? "is" : "isn't");
    free(number);
    free(isPrime);

    return 0;
}
