#include "library.h"

int *getInputNaturalNumber()
{
    int *number = (int *)malloc(sizeof(int));

    printf("Enter a number (greater than or equal to zero): ");
    fflush(stdin);
    scanf("%d", number);

    while (*number < 0)
    {
        printf("Error! Please, enter a number greater than or equal to zero...\n");

        printf("Enter a number (greater than or equal to zero): ");
        fflush(stdin);
        scanf("%d", number);
    }

    return number;
}

int *getAdditionsOfEvenNaturalNumbers(int *range)
{
    int *rtn = (int *)malloc(sizeof(int));
    *rtn = 0;

    int counter = 0;
    for (int i = 1; i <= *range; i++)
    {
        counter += 2;
        *rtn += counter;
    }

    return rtn;
}
