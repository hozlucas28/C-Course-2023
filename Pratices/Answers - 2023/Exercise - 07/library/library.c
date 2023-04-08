#include "library.h"

int getInputNumber()
{
    int number;
    printf("Enter a positive number (except zero): ");
    fflush(stdin);
    scanf("%d", &number);

    while (number < 1)
    {
        printf("Error! Please enter a positive number, except zero...\n");

        printf("Enter a positive number (except zero): ");
        fflush(stdin);
        scanf("%d", &number);
    }

    return number;
}

char *getNaturalType(const int *number)
{
    int n = *number;
    char *type = malloc(sizeof(char) * 20);

    int counter = 0;
    for (int i = 1; i < *number; i++)
    {
        if (*number % i == 0)
            counter += i;
    };

    if (counter < n)
    {
        strcpy(type, "Deficient");
    }
    else if (counter == n)
    {
        strcpy(type, "Perfect");
    }
    else if (counter > n)
    {
        strcpy(type, "Abundant");
    }

    return type;
}
