#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../library/library.h"

void tests()
{
    int arr01[3][3] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    int nRowsColumns01 = 3;
    assert(isSymmetrical((int *)arr01, &nRowsColumns01) == 1);

    int arr02[3][3] = {{1, 0, 2}, {0, 2, 0}, {0, 0, 3}};
    int nRowsColumns02 = 3;
    assert(isSymmetrical((int *)arr02, &nRowsColumns02) == 0);

    int arr04[1][1] = {{1}};
    int nRowsColumns04 = 1;
    assert(isSymmetrical((int *)arr04, &nRowsColumns04) == 1);

    int arr05[4][4] = {{1, 0, 0, 0}, {0, 2, 0, 0}, {0, 0, 3, 0}, {0, 0, 0, 4}};
    int nRowsColumns05 = 4;
    assert(isSymmetrical((int *)arr05, &nRowsColumns05) == 1);

    int arr06[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int nRowsColumns06 = 4;
    assert(isSymmetrical((int *)arr06, &nRowsColumns06) == 0);
}

int main()
{
    int arr[3][3] = {{10, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int nRowsColumns = 3;

    if (isSymmetrical((int *)arr, &nRowsColumns))
    {
        printf("The multidimensional array is symmetrical.\n");
    }
    else
    {
        printf("The multidimensional array isn't symmetrical.\n");
    }

    tests();

    return 0;
}
