#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one, two, three, four, five, positive, negative;

    positive = 0;
    negative = 0;

    printf("Enter first number: ");
    scanf("%d", &one);

    printf("Enter second number: ");
    scanf("%d", &two);

    printf("Enter third number: ");
    scanf("%d", &three);

    printf("Enter fourth number: ");
    scanf("%d", &four);

    printf("Enter fifth number: ");
    scanf("%d", &five);

    if (one < 0)
        negative++;
    else
        positive++;

    if (two < 0)
        negative++;
    else
        positive++;

    if (three < 0)
        negative++;
    else
        positive++;

    if (four < 0)
        negative++;
    else
        positive++;

    if (five < 0)
        negative++;
    else
        positive++;

    printf("\n\nPositive numbers: %d\nNegative numbers: %d\n\n", positive, negative);
    
    return 0;
}