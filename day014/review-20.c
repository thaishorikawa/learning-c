#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j;

    for (j = 1; j <= 10; j++)
    {
        for (i = 1; i <= 20; i++)
            printf("*");
        printf("\n");
    }
}