#include "library.h"

int *getInputNaturalNumber()
{
    int *number = (int *)malloc(sizeof(int));

    printf("Enter a natural number: ");
    fflush(stdin);
    scanf("%d", number);

    while (*number < 0)
    {
        printf("Error! Enter a natural number...\n");

        printf("Enter a natural number: ");
        fflush(stdin);
        scanf("%d", number);
    }

    return number;
}

int *getAdditionsOfNaturalNumbers(int *range)
{
    int *rtn = (int *)malloc(sizeof(int));
    *rtn = 0;

    int counter = 0;
    for (int i = 1; i <= *range; i++)
    {
        counter++;
        *rtn += counter;
    }

    return rtn;
}
