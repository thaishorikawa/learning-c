#include <stdlib.h>
#include <stdio.h>

char game[3][3];
int r, c;

void initializeMatrix()
{
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
            game[r][c] = ' ';
    }
}

void display()
{
    printf("\n\t 0   1   2\n\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (c == 0)
                printf("\t");
            printf(" %c ", game[r][c]);
            if (c < 2)
                printf("|");
            if (c == 2)
                printf("  %d", r);
        }
        printf("\n");
        if (r < 2)
            printf("\t-----------\n");
    }
    printf("\n");
}

int main()
{
    initializeMatrix();
    display();

    return 0;
}