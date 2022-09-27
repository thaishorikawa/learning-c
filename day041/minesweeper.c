#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct
{
    int isBomb;
    int isOpen;
    int neighbors;
} Cell;

Cell game[10][10];
int r, c, size = 10;

void startGame()
{
    for (r = 0; r < size; r++)
    {
        for (c = 0; c < size; c++)
        {
            game[r][c].isBomb = 0;
            game[r][c].isOpen = 0;
            game[r][c].neighbors = 0;
        }
    }
}

void drawBombs(int n)
{
    int i;
    srand(time(NULL));
    for (i = 1; i <= n; i++)
    {
        r = rand() % size;
        c = rand() % size;
        if (game[r][c].isBomb == 0)
            game[r][c].isBomb = 1;
        else
            i--;
    }
}

int main()
{
    startGame();
    drawBombs(10);

    return 0;
}