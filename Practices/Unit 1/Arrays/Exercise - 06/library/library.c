#include "library.h"

bool isPalindrome(char *word)
{
    int length = strlen(word) - 1;

    for (int i = 0; i != length; i++)
    {
        if (tolower(word[i]) != tolower(word[length]))
        {
            return false;
        }
        length--;
    }

    return true;
}
