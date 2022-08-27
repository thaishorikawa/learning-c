#include <stdio.h>
#include <stdlib.h>


/*

    if(condição01)
    {
        comandos;
    }

    else(condição02)
    {
        comandos;
    }
*/
int main() 
{
    int a;
    int b;

    printf("\nDigite um valor para a:\t");
    scanf("%d", &a);

    printf("\nDigite um valor para b:\t");
    scanf("%d", &b);

    if(a < b)
    {
        printf("\nA menor que B\n\n");
    }

    else if(b < a)
    {
        printf("\nB menor que A\n\n");
    }

    else
    {
        printf("\nA eh igual a B\n\n");
    }

    return 0;
}