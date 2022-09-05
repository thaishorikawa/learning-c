#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int size = 4;
    int i, j, mat[size][size];

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            mat[i][j] = rand() % 100;
    }

    printf("\n\nMatrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }

    printf("\n\nLower diagonal matrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i > j)
                printf("%2d ", mat[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}