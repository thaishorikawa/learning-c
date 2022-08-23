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
        printf("\nJanuary with 31 days\n\n");
        break;
    case 2:
        printf("\nFebruary with 28 days\n\n");
        break;
    case 3:
        printf("\nMarch with 31 days\n\n");
        break;
    case 4:
        printf("\nApril with 30 days\n\n");
        break;
    case 5:
        printf("\nMay with 31 days\n\n");
        break;
    case 6:
        printf("\nJune with 30 days\n\n");
        break;
    case 7:
        printf("\nJuly with 31 days\n\n");
        break;
    case 8:
        printf("\nAugust with 31 days\n\n");
        break;
    case 9:
        printf("\nSeptember with 30 days\n\n");
        break;
    case 10:
        printf("\nOctober with 31 days\n\n");
        break;
    case 11:
        printf("\nNovember with 30 days\n\n");
        break;
    case 12:
        printf("\nDecember with 31 days\n\n");
        break;
    default:
        printf("\nInvalid number!\n\n");
    }
    return 0;
}