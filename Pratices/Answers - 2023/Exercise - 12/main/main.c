#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int *number = getInputNaturalNumber();
    int *result = getAdditionsOfEvenNumbersLessThan(number);

    printf("The additions of even numbers less than %d is %d", *number, *result);
    free(number);
    free(result);

    return 0;
}
