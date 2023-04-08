#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int *firstNumber = getInputNaturalNumber();
    int *secondNumber = getInputNaturalNumber();
    int *result = getProductBySuccessiveSums(firstNumber, secondNumber);

    printf("The product of successive sums between %d and %d is %d.", *firstNumber, *secondNumber, *result);
    return 0;
}
