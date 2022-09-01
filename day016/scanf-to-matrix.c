#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j, mat1[3][3];

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter the numbers %d %d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d ", mat1[i][j]);
        printf("\n");
    }
    return 0;
}