#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;

    printf("\nChoose a number you want: ");
    scanf("%d", &a);

    printf("\nLogic result: %d\n", a < 0);

    if(a < 0)
        printf("\nNegative number!\n");
    else
        printf("\nPositive number or zero!\n");
    printf("\nLet's make the program better...\n\n");

    return 0;
}