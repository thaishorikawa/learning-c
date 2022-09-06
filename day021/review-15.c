#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j, row, column, player, winner, moves, option;
    char game[3][3];

    do
    {    
        player = 1;
        winner = 0;
        moves = 0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                game[i][j] = ' ';
        }

        do
        {
            printf("\n\n\t 0   1   2\n\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (j == 0)
                        printf("\t");
                    printf(" %c ", game[i][j]);
                    if (j < 2)
                        printf("|");
                    if (j == 2)
                        printf("  %d", i);
                }
                if (i < 2)
                    printf("\n\t-----------");
                printf("\n");
            }
            printf("\n\n");

            do
            {
                printf("PLAYER %d: Enter the row and column you want to play: ", player);
                scanf("%d%d", &row, &column);
            } while (row < 0 || row > 2 || column < 0 || column > 2 || game[row][column] != ' ');

            if (player == 1)
            {
                game[row][column] = 'O';
                player++;
            }
            else
            {
                game[row][column] = 'X';
                player = 1;
            }
            moves++;

            if (game[0][0] == 'O' && game[0][1] == 'O' && game[0][2] == 'O' ||
                game[1][0] == 'O' && game[1][1] == 'O' && game[1][2] == 'O' ||
                game[2][0] == 'O' && game[2][1] == 'O' && game[2][2] == 'O')
            {
                printf("\nCongratulations! Player 1 won the game!\n");
                winner = 1;
            }

            if (game[0][0] == 'X' && game[0][1] == 'X' && game[0][2] == 'X' ||
                game[1][0] == 'X' && game[1][1] == 'X' && game[1][2] == 'X' ||
                game[2][0] == 'X' && game[2][1] == 'X' && game[2][2] == 'X')
            {
                printf("\nCongratulations! Player 2 won the game!\n");
                winner = 1;
            }

            if (game[0][0] == 'O' && game[1][0] == 'O' && game[2][0] == 'O' ||
                game[0][1] == 'O' && game[1][1] == 'O' && game[2][1] == 'O' ||
                game[0][2] == 'O' && game[1][2] == 'O' && game[2][2] == 'O')
            {
                printf("\nCongratulations! Player 1 won the game!\n");
                winner = 1;
            }

            if (game[0][0] == 'X' && game[1][0] == 'X' && game[2][0] == 'X' ||
                game[0][1] == 'X' && game[1][1] == 'X' && game[2][1] == 'X' ||
                game[0][2] == 'X' && game[1][2] == 'X' && game[2][2] == 'X')
            {
                printf("\nCongratulations! Player 2 won the game!\n");
                winner = 1;
            }
            
            if (game[0][0] == 'O' && game[1][1] == 'O' && game[2][2] == 'O')
            {
                printf("\nCongratulations! Player 1 won the game!\n");
                winner = 1;
            }

            if (game[0][0] == 'X' && game[1][1] == 'X' && game[2][2] == 'X')
            {
                printf("\nCongratulations! Player 2 won the game!\n");
                winner = 1;
            }

            if (game[0][2] == 'O' && game[1][1] == 'O' && game[2][0] == 'O')
            {
                printf("\nCongratulations! Player 1 won the game!\n");
                winner = 1;
            }

            if (game[0][2] == 'X' && game[1][1] == 'X' && game[2][0] == 'X')
            {
                printf("\nCongratulations! Player 2 won the game!\n");
                winner = 1;
            }
        } while (winner == 0 && moves < 9);

        if (winner == 0)
            printf("\nTie!\n");

        printf("\nEnter 1 to play again: \n");
        scanf("%d", &option);
    } while (option == 1);

    return 0;
}