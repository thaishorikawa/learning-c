#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int size = 5;

void display(int m[][5])
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int sumColumn(int mat[][5], int c)
{
    int r, sum = 0;

    for (r = 0; r < size; r++)
        sum += mat[r][c];
    return sum;
}

int main()
{
    int mat[5][5];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }

    display(mat);

    printf("\n");
    for (i = 0; i < size; i++)
        printf("Sum of column %d: %d\n", i, sumColumn(mat, i));
   
    return 0;
}