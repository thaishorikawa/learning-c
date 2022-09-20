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
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%c", game[r][c]);
        }
        printf("\n");
    }
}

int main()
{
    initializeMatrix();
    display();

    return 0;
}