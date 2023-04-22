#include "library.h"

float *getSumOfNumbersAbovePrincipalDiagonalExcluded(float *arr, int *nRowsColumns)
{
    float *rtn = (float *)malloc(sizeof(float));
    *rtn = 0;

    for (int i = 0; i < *nRowsColumns; i++)
    {
        for (int j = i + 1; j < *nRowsColumns; j++)
        {
            (*rtn) += arr[i * (*nRowsColumns) + j];
        }
    }

    return rtn;
}

float *getSumOfNumbersAbovePrincipalDiagonalIncluded(float *arr, int *nRowsColumns)
{
    float *rtn = (float *)malloc(sizeof(float));

    float *sumNumbersPrincipalDiagonal = getSumOfNumbersOfPrincipalDiagonal(arr, nRowsColumns);
    float *sumNumbersAbovePrincipalDiagonalExcluded = getSumOfNumbersAbovePrincipalDiagonalExcluded(arr, nRowsColumns);
    *rtn = (*sumNumbersPrincipalDiagonal) + (*sumNumbersAbovePrincipalDiagonalExcluded);

    free(sumNumbersPrincipalDiagonal);
    free(sumNumbersAbovePrincipalDiagonalExcluded);
    return rtn;
}

float *getSumOfNumbersBelowPrincipalDiagonal(float *arr, int *nRowsColumns)
{
    float *rtn = (float *)malloc(sizeof(float));

    for (int i = (*nRowsColumns) - 1; i > 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            (*rtn) += arr[i * (*nRowsColumns) + j];
        }
    }

    return rtn;
}

float *getSumOfNumbersOfPrincipalDiagonal(float *arr, int *nRowsColumns)
{
    float *rtn = (float *)malloc(sizeof(float));
    *rtn = 0;

    for (int i = 0; i < *nRowsColumns; i++)
    {
        (*rtn) += arr[i * (*nRowsColumns) + i];
    }

    return rtn;
}
