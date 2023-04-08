#include "library.h"

int *getInputNumerator()
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

int *getInputDenominator()
{
    int *number = (int *)malloc(sizeof(int));
    ;

    printf("Enter a number (greater than zero): ");
    fflush(stdin);
    scanf("%d", number);

    while (*number <= 0)
    {
        printf("Error! Please, enter a number greater than zero...\n");

        printf("Enter a number (greater than or equal to zero): ");
        fflush(stdin);
        scanf("%d", number);
    }

    return number;
}

int *getDivision(int *numerator, int *denominator)
{
    int *results = malloc(sizeof(int) * 2);

    results[0] = *numerator / *denominator;
    results[1] = *numerator % *denominator;

    return results;
}
