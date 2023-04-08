#include "library.h"

int getInputNaturalNumber()
{
    int number;

    puts("Enter a number: ");
    fflush(stdin);
    scanf("%d", &number);

    while (!isNaturalNumber(&number))
    {
        printf("Error! %d isn't a natural number. Try again...\n", number);

        puts("Enter a number: ");
        fflush(stdin);
        scanf("%d", &number);
    }

    return number;
}

int getFactorial(const int *number)
{
    int rtn = *number;
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
