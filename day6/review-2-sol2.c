#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, positive, negative;

    positive = 0;
    negative = 0;

    printf("Enter first number: ");
    scanf("%d", &number);
    if (number < 0)
        negative++;
    else
        positive++;

    printf("Enter second number: ");
    scanf("%d", &number);
    if (number < 0)
        negative++;
    else
        positive++;

    printf("Enter third number: ");
    scanf("%d", &number);
    if (number < 0)
        negative++;
    else
        positive++;

    printf("Enter fourth number: ");
    scanf("%d", &number);
    if (number < 0)
        negative++;
    else
        positive++;

    printf("Enter fifth number: ");
    scanf("%d", &number);
    if (number < 0)
        negative++;
    else
        positive++;

    printf("\nPositive numbers: %d\nNegative numbers: %d\n\n", positive, negative);
    
    return 0;
}