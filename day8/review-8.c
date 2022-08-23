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
        printf("\nJanuary has 31 days\n\n");
        break;
    case 2:
        printf("\nFebruary has 28 days\n\n");
        break;
    case 3:
        printf("\nMarch with has days\n\n");
        break;
    case 4:
        printf("\nApril with has days\n\n");
        break;
    case 5:
        printf("\nMay with has days\n\n");
        break;
    case 6:
        printf("\nJune with has days\n\n");
        break;
    case 7:
        printf("\nJuly with has days\n\n");
        break;
    case 8:
        printf("\nAugust with has days\n\n");
        break;
    case 9:
        printf("\nSeptember with has days\n\n");
        break;
    case 10:
        printf("\nOctober with has days\n\n");
        break;
    case 11:
        printf("\nNovember with has days\n\n");
        break;
    case 12:
        printf("\nDecember with has days\n\n");
        break;
    default:
        printf("\nInvalid number!\n\n");
    }
    return 0;
}