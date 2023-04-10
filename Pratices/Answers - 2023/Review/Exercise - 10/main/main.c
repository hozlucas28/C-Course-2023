#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int *number = getInputNaturalNumber();
    int *result = getAdditionsOfNaturalNumbers(number);

    printf("The additions of natural numbers of %d (natural number) is %d.", *number, *result);
    free(number);
    free(result);

    return 0;
}
