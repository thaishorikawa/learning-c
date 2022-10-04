#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int **mat, i, j;

    mat = malloc(4 * sizeof(int*));

    for (i = 0; i < 4; i++)
        mat[i] = malloc(3 * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            *(*(mat + i) + j) = rand() % 100;
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d ", *(*(mat + i) + j));
        printf("\n");
    }

    for (i = 0; i < 5; i++)
        free(mat[i]);
    free(mat);

    return 0;
}