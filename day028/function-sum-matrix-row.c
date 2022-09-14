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

int sumRow(int x[][5], int r)
{
    int c, sum = 0;

    for (c = 0; c < size; c++)
        sum += x[r][c];
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

    for (i = 0; i < size; i++)
        printf("\nSum of row %d: %d\n", i, sumRow(mat, i));
   
    return 0;
}