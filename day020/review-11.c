#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int size = 5;
    int i, j, mat[size][size];

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            mat[i][j] = rand() % 100;
    }

    for (i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    printf("\n\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
                printf("%d ", mat[i][j]);
            else    
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}