#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a;

    printf("\nChoose a number you want: ");
    scanf("%d", &a);

    printf("Ternary operator: \n");
    a < 0 ? printf("\n\tNegative number!\n") : printf("\n\tPositive number or zero!\n");

    printf("\n\nIf/Else:\n");
    if(a < 0)
        printf("\n\tNegative number!\n");
    else
        printf("\n\tPositive number or zero!\n");
    printf("\nLet's make the program better...\n\n");

    return 0;
}