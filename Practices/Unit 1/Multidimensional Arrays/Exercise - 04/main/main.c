#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../library/library.h"

void tests()
{
    int arr01[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};
    assert(isIdentity((int *)arr01, 3) == 1);

    int arr02[3][3] = {
        {1, 0, 0},
        {0, 2, 0},
        {0, 0, 1}};
    assert(isIdentity((int *)arr02, 3) == 0);

    int arr03[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}};
    assert(isIdentity((int *)arr03, 4) == 1);

    int arr04[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 2, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}};
    assert(isIdentity((int *)arr04, 4) == 0);

    int arr05[1][1] = {{1}};
    assert(isIdentity((int *)arr05, 1) == 1);

    int arr06[1][1] = {{2}};
    assert(isIdentity((int *)arr06, 1) == 0);
}

int main()
{
    tests();
    return 0;
}
