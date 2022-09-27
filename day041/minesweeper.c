#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct
{
    int isBomb;
    int isOpen;
    int adjacent;
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
            game[r][c].adjacent = 0;
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

int isValidCoordinates(int r, int c)
{
    if (r >= 0 && r < size && c >= 0 && c < size)
        return 1;
    else
        return 0;
}

int quantAdjacentBombs(int r, int c)
{
    int quantity = 0;

    if (isValidCoordinates(r - 1, c) && game[r - 1][c].isBomb)
        quantity++;
    if (isValidCoordinates(r + 1, c) && game[r + 1][c].isBomb)
        quantity++;
    if (isValidCoordinates(r, c + 1) && game[r][c + 1].isBomb)
        quantity++;
    if (isValidCoordinates(r, c - 1) && game[r][c - 1].isBomb)
        quantity++;
    return quantity;
}

void countingBombs()
{
    for (r = 0; r < size; r++)
    {
        for (c = 0; c < size; c++)
            game[r][c].adjacent = quantAdjacentBombs(r, c);
    }
}

int main()
{
    startGame();
    drawBombs(10);
    countingBombs();

    return 0;
}