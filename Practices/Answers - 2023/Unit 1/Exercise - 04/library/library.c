#include "library.h"

int *getInputNumber()
{
    int *input = (int *)malloc(sizeof(int));

    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d", input);

    return input;
}

void showArray(int *arr, int *size)
{
    printf("{");
    for (int i = 0; i < *size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("}\n");
}

void deleteElement(int index, int *arr, int *size)
{
    int aux;
    for (int i = index; i < *size; i++)
    {
        aux = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = aux;
    }

    (*size)--;
}

void deleteFirstOccurrenceNumber(int *number, int *arr, int *size)
{
    for (int i = 0; i < *size; i++)
    {
        if (arr[i] == *number)
        {
            deleteElement(i, arr, size);
            break;
        }
    }
}
