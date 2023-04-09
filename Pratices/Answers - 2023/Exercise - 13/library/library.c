#include "library.h"

int *getInputNaturalNumber()
{
    int *number = (int *)malloc(sizeof(int));

    printf("Enter a natural number (greater than or equal to zero): ");
    fflush(stdin);
    scanf("%d", number);

    while (*number < 0)
    {
        printf("Error! Please enter a number greater than or equal to zero...\n");

        printf("Enter a natural number: ");
        fflush(stdin);
        scanf("%d", number);
    }

    return number;
}

bool *isPrimeNumber(int *number)
{
    bool *rtn = (bool *)malloc(sizeof(bool));

    int counter = 0;
    for (int i = 1; i <= *number; i++)
    {
        if (*number % i == 0)
            counter++;

        if (counter > 2)
            break;
    }

    *rtn = counter == 2;
    return rtn;
}
