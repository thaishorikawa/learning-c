#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("\nChoose a number you want: ");
    scanf("%d", &a);

    if(a < 0)
        printf("\nNegative number!\n");
    printf("\nLet's make the program better...\n");
}