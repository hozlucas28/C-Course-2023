#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    float arr[3][3] = {{1.2, 2.5, 3.0}, {4.2, 5.6, 6.9}, {7.8, 8.1, 9.4}};
    int nRowsColumns = 3;

    float *sumNumbersAbovePrincipalDiagonalExcluded = getSumOfNumbersAbovePrincipalDiagonalExcluded((float *)arr, &nRowsColumns);
    float *sumNumbersAbovePrincipalDiagonalIncluded = getSumOfNumbersAbovePrincipalDiagonalIncluded((float *)arr, &nRowsColumns);
    float *sumNumbersBelowPrincipalDiagonal = getSumOfNumbersBelowPrincipalDiagonal((float *)arr, &nRowsColumns);

    printf("The sum of the numbers above principal diagonal (excluded) is %f.\n", *sumNumbersAbovePrincipalDiagonalExcluded);
    printf("The sum of the numbers above principal diagonal (included) is %f.\n", *sumNumbersAbovePrincipalDiagonalIncluded);
    printf("The sum of the numbers below principal diagonal is %f.\n", *sumNumbersBelowPrincipalDiagonal);

    free(sumNumbersAbovePrincipalDiagonalExcluded);
    free(sumNumbersAbovePrincipalDiagonalIncluded);
    free(sumNumbersBelowPrincipalDiagonal);

    return 0;
}
