#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int size = 7;
    int i, j, mat[size][size];

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            mat[i][j] = rand() % 100;
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }

    printf("\n\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (j == (size - 1 - i))
                printf("%d ", mat[i][size - 1 - i]);
            else    
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}