#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input;

    printf("Enter a float number: ");
    fflush(stdin);
    scanf("%f", &input);

    printf("The number is: %f", input);

    return 0;
}