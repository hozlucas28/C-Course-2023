#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int number = getInputNaturalNumber();
    int result = getFactorial(&number);
    printf("The factorial of %d is %d", number, result);
    return 0;
}
