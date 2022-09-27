#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct
{
    int isMine;
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
            game[r][c].isMine = 0;
            game[r][c].isOpen = 0;
            game[r][c].adjacent = 0;
        }
    }
}

void drawMines(int n)
{
    int i;
    srand(time(NULL));
    for (i = 1; i <= n; i++)
    {
        r = rand() % size;
        c = rand() % size;
        if (game[r][c].isMine == 0)
            game[r][c].isMine = 1;
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

int quantAdjacentMines(int r, int c)
{
    int quantity = 0;

    if (isValidCoordinates(r - 1, c) && game[r - 1][c].isMine)
        quantity++;
    if (isValidCoordinates(r + 1, c) && game[r + 1][c].isMine)
        quantity++;
    if (isValidCoordinates(r, c + 1) && game[r][c + 1].isMine)
        quantity++;
    if (isValidCoordinates(r, c - 1) && game[r][c - 1].isMine)
        quantity++;
    return quantity;
}

void countingMines()
{
    for (r = 0; r < size; r++)
    {
        for (c = 0; c < size; c++)
            game[r][c].adjacent = quantAdjacentMines(r, c);
    }
}

void display()
{
    printf("\n\n\t    ");
    for (r = 0; r < size; r++)
        printf(" %d  ", r);
    printf("\n\t   -----------------------------------------\n");
    for (r = 0; r < size; r++)
    {
        printf("\t%d  |", r);
        for (c = 0; c < size; c++)
        {
            if (game[r][c].isOpen)
            {
                if (game[r][c].isMine)
                    printf(" * ");
                else
                    printf("%d", game[r][c].adjacent);
            }
            else
                printf("   ");
            printf("|");
        }
        printf("\n\t   -----------------------------------------\n");
    }
}

void openCell(int r, int c)
{
    if (isValidCoordinates(r, c) == 1 && game[r][c].isOpen == 0)
    {
        game[r][c].isOpen = 1;
        if (game[r][c].adjacent == 0)
        {
            openCell(r - 1, c);
            openCell(r + 1, c);
            openCell(r, c + 1);
            openCell(r, c - 1);
        }
    }
}

void play()
{
    int row, column;

    do
    {
        printf("\nEnter the coordinates of row and column: ");
        scanf("%d%d", &row, &column);

        if (isValidCoordinates(row, column) == 0)
            printf("\nInvalid coordinate!");
    } while (isValidCoordinates(row, column) == 0 || game[row][column].isOpen == 1);

    openCell(row, column);
}

int main()
{
    startGame();
    drawMines(10);
    countingMines();
    printf("\n\t\t\tMINESWEEPER\n");
    display();

    return 0;
}