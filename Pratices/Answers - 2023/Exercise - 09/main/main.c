#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int *numerator = getInputNumerator();
    int *denominator = getInputDenominator();
    int *quotientAndRemainder = getDivision(numerator, denominator);

    printf("The division quotient of %d and %d is %d and the remainder is %d", *numerator, *denominator, quotientAndRemainder[0], quotientAndRemainder[1]);
    free(numerator);
    free(denominator);
    free(quotientAndRemainder);

    return 0;
}
