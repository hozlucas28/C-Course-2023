#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

#define NUMBERS_OF_ELEMENTS_TO_INSERT 1
#define SIZE (10 + NUMBERS_OF_ELEMENTS_TO_INSERT)
#define MIN_INDEX 0
#define MAX_INDEX 9
#define VECTOR                        \
    {                                 \
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10 \
    }

int main()
{
    int array[] = VECTOR;
    printf("Original vector: ");
    showArray(array, SIZE - 1);

    int *number = getInputNumber();
    int *index = getInputIndex(MIN_INDEX, MAX_INDEX);

    insertElementToVector(number, index, array, SIZE);
    printf("New vector: ");
    showArray(array, SIZE);

    free(number);
    free(index);

    return 0;
}
