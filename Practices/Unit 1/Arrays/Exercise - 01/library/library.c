#include "library.h"

int *getInputNumber()
{
    int *number = (int *)malloc(sizeof(int));

    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d", number);

    return number;
}

int *getInputIndex(int min, int max)
{
    int *index = (int *)malloc(sizeof(int));

    printf("Enter an index (between %d and %d): ", min, max);
    fflush(stdin);
    scanf("%d", index);

    while (!(min <= *index && *index <= max))
    {
        printf("Error! Please enter an index between %d and %d...\n", min, max);

        printf("Enter a index (between %d and %d): ", min, max);
        fflush(stdin);
        scanf("%d", index);
    }

    return index;
}

void insertElementToVector(int *element, int *index, int *array, int size)
{
    for (int i = size - 1; i > *index; i--)
    {
        array[i] = array[i - 1];
    }

    array[*index] = *element;
}

void showArray(int *array, int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("}\n");
}
