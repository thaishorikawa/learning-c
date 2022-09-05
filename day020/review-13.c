#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int sizeI = 5, sizeJ = 4;
    int i, j, mat[sizeI][sizeJ], trans[sizeJ][sizeI];

    srand(time(NULL));

    for (i = 0; i < sizeI; i++)
    {
        for (j = 0; j < sizeJ; j++)
            mat[i][j] = rand() % 200;
    }

    printf("\nMatrix:\n");
    for (i = 0; i < sizeI; i++)
    {
        for (j = 0; j < sizeJ; j++)
            printf("%3d ", mat[i][j]);
        printf("\n");
    }

    for (i = 0; i < sizeI; i++)
    {
        for (j = 0; j < sizeJ; j++)
            trans[j][i] = mat[i][j];
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < sizeJ; i++)
    {
        for (j = 0; j < sizeI; j++)
            printf("%3d ", trans[i][j]);
        printf("\n");
    }
    printf("\n\n");

    return 0;
}