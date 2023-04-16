#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

#define SIZE 15
#define ARRAY                                        \
    {                                                \
        1, 2, 5, 6, 4, 8, 3, 1, 2, 5, 6, 8, 9, 10, 1 \
    }

int main()
{
    int arr[] = ARRAY;
    int size = SIZE;

    printf("Original array = ");
    showArray(arr, &size);

    int *number = getInputNumber();
    deleteAllOccurrencesNumber(number, arr, &size);

    printf("Modified array = ");
    showArray(arr, &size);

    return 0;
}
