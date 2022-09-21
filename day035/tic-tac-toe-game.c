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

int wonInARow(int r, char c)
{
    if (game[r][0] == c && game[r][1] == c && game[r][2] == c)
        return 1;
    else
        return 0;
}

int wonInRows(char c)
{
    int won = 0;
    for (r = 0; r < 3; r++)
    {
        won += wonInARow(r, c);
    }
    return won;
}

int wonInAColumn(int c, char j)
{
    if (game[0][c] == j && game[1][c] == j && game[2][c] == j)
        return 1;
    else
        return 0;
}

int wonInColumns(char j)
{
    int won = 0;
    for (c = 0; c < 3; c++)
    {
        won += wonInAColumn(c, j);
    }
    return won;
}

int wonInDiagonal(char c)
{
    if (game[0][0] == c && game[1][1] == c && game[2][2] == c)
        return 1;
    else
        return 0;
}

int wonInDiagonalSec(char c)
{
    if (game[0][2] == c && game[1][1] == c && game[2][0] == c)
        return 1;
    else
        return 0;
}

int isValid(int r, int c)
{
    if (r >= 0 && r < 3 && c >= 0 && c < 3 && game[r][c] == ' ')
        return 1;
    else
        return 0;
}

void readCoordinates()
{
    int row, column;

    printf("Enter a row and a column: ");
    scanf("%d%d", &row, &column);

    while (isValid(row, column) == 0)
    {
        printf("Invalid coordinates! Enter another row and column: ");
        scanf("%d%d", &row, &column);
    }
}

int main()
{
    initializeMatrix();
    display();

    return 0;
}