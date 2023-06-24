#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int number;
    float decimal;
    char letter;
    char text[];
} CustomData;

/* -------------------------------- Protypes -------------------------------- */

CustomData *createCustomData();
void addValuesCustomData(CustomData *);
void showCustomData(CustomData *);

/* -------------------------------- Functions ------------------------------- */

CustomData *createCustomData()
{
    return (CustomData *)malloc(sizeof(CustomData));
}

void addValuesCustomData(CustomData *data)
{
    printf("Add a number: ");
    fflush(stdin);
    scanf("%d", &data->number);

    printf("Add a decimal: ");
    fflush(stdin);
    scanf("%f", &data->decimal);

    printf("Add a letter: ");
    fflush(stdin);
    scanf("%c", &data->letter);

    printf("Add a text: ");
    fflush(stdin);
    scanf("%s", data->text);
}

void showCustomData(CustomData *data)
{
    const CustomData vData = *data;
    printf("Custom data: %d | %f | %c | %s", vData.number, vData.decimal, vData.letter, vData.text);
}

/* ------------------------------ Main Program ------------------------------ */

int main()
{
    CustomData *data = createCustomData();
    addValuesCustomData(data);
    showCustomData(data);

    free(data);
    return 0;
}
