#include <stdio.h>
#include "functions.h"

#define ROWS 6
#define COLS 7


int main() {
    
    int currentPlayer = 1;
    int column;

    initializeBoard();

    printf("Welcome to Connect Four!\n");

    while (1) {

        displayBoard();

        printf("Player %d, enter your move (column 1-7): ", currentPlayer);
        scanf("%d", &column);

        if (isValidMove(column)) {

            makeMove(column, (currentPlayer == 1) ? 'X' : 'O');

            if (checkWin((currentPlayer == 1) ? 'X' : 'O')) {

                displayBoard();
                printf("Player %d wins!\n", currentPlayer);
                break;

            }

            if (isBoardFull()) {

                displayBoard();
                printf("It's a draw!\n");
                break;

            }

            currentPlayer = (currentPlayer == 1) ? 2 : 1; //changes the value of the currentplayer variable

        } else {

            printf("Invalid move. Please try again.\n");

        }
    }

    system ("pause");
    return 0;
    
}
