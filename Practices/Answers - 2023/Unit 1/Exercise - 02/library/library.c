#include "library.h"

int *getInputNumber()
{
    int *number = (int *)malloc(sizeof(int));

    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d", number);

    return number;
}

void showArray(int *arr, int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

void sortArrayAscending(int *arr, int size)
{
    int aux;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

void insertElementToArray(int *element, int *arr, int lastIndex)
{
    arr[lastIndex] = *element;
}
