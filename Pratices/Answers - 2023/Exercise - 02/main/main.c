#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int firstNumber = getInputFirstNumber();
    int secondNumber = getInputSecondNumber(&firstNumber);
    int result = getCombinatory(&firstNumber, &secondNumber);
    printf("The combinatory of %d and %d is %d", firstNumber, secondNumber, result);
    return 0;
}
