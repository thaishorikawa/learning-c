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
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nThis month has 31 days\n\n");
        break;
    case 2:
        printf("\nThis month has 28 days\n\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nThis month has 30 days\n\n");
        break;
    default:
        printf("\nInvalid number!\n\n");
    }
    return 0;
}