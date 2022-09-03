#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i, j, sum = 0, mat[5][7];

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            mat[i][j] = rand() % 100;
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            sum += mat[i][j];
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\nTotal: %d\n\n", sum);
    
    return 0;
}