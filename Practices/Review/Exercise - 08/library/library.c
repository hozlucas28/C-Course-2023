#include "library.h"

int *getInputNaturalNumber()
{
    int *number = (int *)malloc(sizeof(int));

    printf("Enter a number (greater than or equal to zero): ");
    fflush(stdin);
    scanf("%d", number);

    while (*number < 0)
    {
        printf("Error! Please enter a number greater than or equal to zero...\n");

        printf("Enter a number (greater than or equal to zero): ");
        fflush(stdin);
        scanf("%d", number);
    }

    return number;
}

int *getProductBySuccessiveSums(const int *firstNumber, const int *secondNumber)
{
    int *rtn = (int *)malloc(sizeof(int));
    *rtn = 0;

    for (int i = 0; i < *secondNumber; i++)
    {
        *rtn += *firstNumber;
    }

    return rtn;
}
