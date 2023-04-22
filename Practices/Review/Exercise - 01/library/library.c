#include "library.h"

int getInputNaturalNumber()
{
    int number;

    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d", &number);

    while (!isNaturalNumber(&number))
    {
        printf("Error! %d isn't a natural number. Try again...\n", number);

        printf("Enter a number: ");
        fflush(stdin);
        scanf("%d", &number);
    }

    return number;
}

int getFactorial(const int *number)
{
    int rtn = *number;
    if (rtn == 0)
        return 1;

    for (int i = *number - 1; i > 0; i--)
    {
        rtn *= i;
    }

    return rtn;
}

bool isNaturalNumber(const int *number)
{
    return (*number > -1) ? true : false;
}
