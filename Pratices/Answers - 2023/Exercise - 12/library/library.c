#include "library.h"

int *getInputNaturalNumber()
{
    int *number = (int *)malloc(sizeof(int));

    printf("Enter a number (greater than zero): ");
    fflush(stdin);
    scanf("%d", number);

    while (*number < 0)
    {
        printf("Error! Please enter a number greater than zero...");

        printf("Enter a number (greater than zero): ");
        fflush(stdin);
        scanf("%d", number);
    }

    return number;
}

int *getAdditionsOfEvenNumbersLessThan(int *range)
{
    int *rtn = (int *)malloc(sizeof(int));
    *rtn = 0;

    for (int i = 2; i < *range; i = i + 2)
    {
        *rtn += i;
    }

    return rtn;
}
