#include <stdlib.h>
#include <stdio.h>

int main()
{
    int month;

    printf("\nEnter a number: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("\nJanuary\n\n");
        break;
    case 2:
        printf("\nFebruary\n\n");
        break;
    case 3:
        printf("\nMarch\n\n");
        break;
    case 4:
        printf("\nApril\n\n");
        break;
    case 5:
        printf("\nMay\n\n");
        break;
    case 6:
        printf("\nJune\n\n");
        break;
    case 7:
        printf("\nJuly\n\n");
        break;
    case 8:
        printf("\nAugust\n\n");
        break;
    case 9:
        printf("\nSeptember\n\n");
        break;
    case 10:
        printf("\nOctober\n\n");
        break;
    case 11:
        printf("\nNovember\n\n");
        break;
    case 12:
        printf("\nDecember\n\n");
        break;
    default:
        printf("\nInvalid number!\n\n");
    }
    return 0;
}