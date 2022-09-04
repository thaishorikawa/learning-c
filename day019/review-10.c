#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int size = 3;
    int i, j, A[size][size], B[size][size], C[size][size];

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            A[i][j] = rand() % 100;
            B[i][j] = rand() % 100;
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatrix A\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%3d ", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%3d ", B[i][j]);
        printf("\n");
    }

    printf("\nMatrix C\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%3d ", C[i][j]);
        printf("\n");
    }
    
    return 0;
}