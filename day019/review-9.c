#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i, j, sum, mat[5][10], rowSum[5], colSum[10];

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
            mat[i][j] = rand() % 100;
    }

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 10; j++)
            sum += mat[i][j];
        rowSum[i] = sum;
    }

    for (j = 0; j < 10; j++)
    {
        sum = 0;
        for (i = 0; i < 5; i++)
            sum += mat[i][j];
        colSum[j] = sum;
    }

    printf("\nMatrix:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }

    printf("\n\nArray with sum of rows:\n");
    for (i = 0; i < 5; i++)
        printf("Row %d: %d\n", i, rowSum[i]);

    printf("\n\nArray with sum of columns:\n");
    for (j = 0; j < 10; j++)
        printf("Column %d: %d\n", j, colSum[j]);

    return 0;
}