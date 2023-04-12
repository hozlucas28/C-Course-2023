#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

#define NUMBERS_OF_ELEMENTS_TO_INSERT 1
#define SIZE (12 + NUMBERS_OF_ELEMENTS_TO_INSERT)
#define ARRAY                                  \
    {                                          \
        1, 5, 6, 7, 9, 77, -1, 24, 13, 8, 9, 7 \
    }

int main()
{
    int arr[SIZE] = ARRAY;
    sortArrayAscending(arr, SIZE);

    printf("Original array: ");
    showArray(arr, SIZE - NUMBERS_OF_ELEMENTS_TO_INSERT);

    int *element = getInputNumber();
    insertElementToArray(element, arr, SIZE - 1);
    printf("Updated array: ");
    showArray(arr, SIZE);

    sortArrayAscending(arr, SIZE + NUMBERS_OF_ELEMENTS_TO_INSERT);
    printf("Ordered array: ");
    showArray(arr, SIZE);

    free(element);

    return 0;
}
