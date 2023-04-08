#include "library.h"

int getInputFirstNumber()
{
    int number;
    printf("Enter a number (greater or equal to zero): ");
    fflush(stdin);
    scanf("%d", &number);

    while (number < 0)
    {
        printf("Error! Please enter a number greater or equal to zero...\n");

        printf("Enter a number (greater or equal to zero): ");
        fflush(stdin);
        scanf("%d", &number);
    }

    return number;
}

int getInputSecondNumber(const int *firstNumber)
{
    int number;
    printf("Enter a number (between 0 and %d): ", *firstNumber);
    fflush(stdin);
    scanf("%d", &number);

    while (number < 0 || number > *firstNumber)
    {
        printf("Error! Please enter a number between 0 and %d...\n", *firstNumber);

        printf("Enter a number (between 0 and %d): ", *firstNumber);
        fflush(stdin);
        scanf("%d", &number);
    }

    return number;
}

int getFactorialNumber(const int *number)
{
    int rtn = *number;
    if (rtn == 0)
        return 1;

    for (int i = *number - 1; i > 0; i--)
    {
        rtn *= i;
    };

    return rtn;
}

int getCombinatory(const int *firstNumber, const int *secondNumber)
{
    int aux = *firstNumber - *secondNumber;
    int firstNumberFactorial = getFactorialNumber(firstNumber);
    int secondNumberFactorial = getFactorialNumber(secondNumber);
    int secondAndFirstNumberFactorial = getFactorialNumber(&aux);
    return firstNumberFactorial / (secondNumberFactorial * secondAndFirstNumberFactorial);
}
