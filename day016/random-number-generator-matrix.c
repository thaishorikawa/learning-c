#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i, j, mat1[3][3];

    srand(time(NULL));

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            mat1[i][j] = 1 + rand() % 100;
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%5d ", mat1[i][j]);
        printf("\n");
    }
    return 0;
}