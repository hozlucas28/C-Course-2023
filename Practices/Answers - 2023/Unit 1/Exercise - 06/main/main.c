#include <stdio.h>
#include <stdlib.h>

#include "../library/library.h"

#define WORD "oso"

int main()
{
    char word[] = WORD;
    (isPalindrome(word)) ? printf("'%s' is palindrome.", word) : printf("'%s' isn't palindrome.", word);
    return 0;
}
