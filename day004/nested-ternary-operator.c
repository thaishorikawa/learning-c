#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("\nChoose a number you want: ");
    scanf("%d", &a);

    printf("\nTernary operator: \n");
    a < 0 ? printf("\n\tNegative number!\n") :
        a > 0 ? printf("\n\tPositive number!\n") : printf("\n\tNumber is zero!\n");

    printf("\n\nLet's make the program better...\n\n");

    return 0;
}