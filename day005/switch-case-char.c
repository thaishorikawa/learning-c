#include <stdio.h>
#include <stdlib.h>

int main()
{
    char option;

    printf("\na - Register product\nb - Sell product\nc - Search product\nd - Print\nz - Exit\n");
    scanf("%c", &option);

    switch (option)
    {
    case 'a':
        printf("\nRegistering new product.\n");
        break;
    case 'b':
        printf("\nSelling new product.\n");
        break;
    case 'c':
        printf("\nSearching new product.\n");
        break;
    case 'd':
        printf("\nPrinting a report.\n");
        break;
    case 'z':
        printf("\nExit.\n");   
        break; 
    default:
        printf("\nInvalid option!\n");
    }
    return 0;
}