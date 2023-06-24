#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* -------------------------------- Protypes -------------------------------- */

void showStr(const char *);
char *copyStr(const char *);

/* -------------------------------- Functions ------------------------------- */

void showStr(const char *text)
{
    printf("\n%s", text);
}

char *copyStr(const char *source)
{
    int sourceSize = strlen(source);
    char *copy = (char *)malloc(sourceSize * sizeof(char));

    for (int i = 0; i < sourceSize; i++)
    {
        copy[i] = source[i];
    }

    return copy;
}

/* ------------------------------ Main Program ------------------------------ */

int main()
{
    const char text[] = "Hello World!";
    showStr(text);

    const char *copy = copyStr(text);
    showStr(copy);

    return 0;
}
