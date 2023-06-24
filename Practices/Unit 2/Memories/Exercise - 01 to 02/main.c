#include <stdio.h>
#include <stdlib.h>

/* ------------------------------- Prototypes ------------------------------- */

int getInputSize();
int *createVectInt(const int);
void addElementsVectOfInt(int *, const int);
void showVectOfInt(const int *, const int);

/* -------------------------------- Functions ------------------------------- */

int getInputSize()
{
    int rtn;

    printf("Enter the size of the vector: ");
    fflush(stdin);
    scanf("%d", &rtn);
    return rtn;
}

int *createVectInt(const int size)
{
    return (int *)malloc(size * sizeof(int));
}

void addElementsVectOfInt(int *vec, const int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nAdd element number %d: ", i + 1);
        fflush(stdin);
        scanf("%d", vec + i);
    }
}

void showVectOfInt(const int *vec, const int size)
{
    printf("\n[");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", vec[i]);
    }
    printf(" ]");
}

/* ------------------------------ Main Program ------------------------------ */

int main()
{
    const int size = getInputSize();
    int *vec = createVectInt(size);
    addElementsVectOfInt(vec, size);
    showVectOfInt(vec, size);

    free(vec);
    return 0;
}
