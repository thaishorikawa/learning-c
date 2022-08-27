#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;

    printf("\n1 - Register product\n2 - Sell product\n3 - Search product\n4 - Print\n5 - Exit\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\nRegistering new product.\n");
        break;
    case 2:
        printf("\nSelling new product.\n");
        break;
    case 3:
        printf("\nSearching new product.\n");
        break;
    case 4:
        printf("\nPrinting a report.\n");
        break;
    case 5:
        printf("\nExit.\n");   
        break; 
    default:
        printf("\nInvalid option!\n");
    }
    return 0;
}