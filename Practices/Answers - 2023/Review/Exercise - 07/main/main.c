#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

int main()
{
    int number = getInputNumber();
    char *naturalType = getNaturalType(&number);

    printf("%s", naturalType);
    free(naturalType);

    return 0;
}
