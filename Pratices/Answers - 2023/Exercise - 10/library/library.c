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

int *getAdditionsOfNaturalNumbers(int *number)
{
    int *rtn = (int *)malloc(sizeof(int));
    *rtn = 0;

    for (int i = 0; i <= *number; i++)
    {
        *rtn += i;
    }

    return rtn;
}
