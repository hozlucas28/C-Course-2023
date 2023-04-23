#include "library.h"

bool isIdentity(int *arr, int nRowsColumns)
{
    bool rtn = true;

    for (int i = 0; rtn && i < nRowsColumns; i++)
    {
        for (int j = 0; j < nRowsColumns; j++)
        {
            int element = arr[i * nRowsColumns + j];
            printf("%d\n", element);

            if ((i == j && element != 1) || (i != j && element != 0))
            {
                rtn = false;
                break;
            }
        }
    }

    return rtn;
}
