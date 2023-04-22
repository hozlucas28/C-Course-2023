#include "library.h"

bool isSymmetrical(int *arr, int *nRowsColumns)
{
    bool rtn = true;

    for (int i = 0; rtn && i < *nRowsColumns; i++)
    {
        for (int j = 0; j < *nRowsColumns; j++)
        {
            int element = arr[i * (*nRowsColumns) + j];
            if ((j == i && element == 0) || (j != i && element != 0))
            {
                rtn = false;
                break;
            }
        }
    }

    return rtn;
}
