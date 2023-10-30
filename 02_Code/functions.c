#include <stdio.h>

#define ROWS 6
#define COLS 7

char board[ROWS][COLS];

void initializeBoard() {   //code based of AI (Chat-GPT)
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard() {
    
    system("cls"); //makes the screen "refresh"

    printf("\n\n\n\n"); //space away from the top

    for (int i = 0; i < ROWS; i++) { 
        for (int j = 0; j < COLS; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
    }
    printf("  1   2   3   4   5   6   7\n"); //prints out index for the board
}

int isValidMove(int col) {
    return col >= 1 && col <= COLS && board[0][col - 1] == ' ';
}

void makeMove(int col, char player) {
    for (int i = ROWS - 1; i >= 0; i--) {
        if (board[i][col - 1] == ' ') {
            board[i][col - 1] = player;
            break;
        }
    }
}

int checkWin(char player) {
    
    for (int i = 0; i < ROWS; i++) { //checks for horizontal wins
        for (int j = 0; j <= COLS - 4; j++) {
            if (board[i][j] == player && board[i][j + 1] == player &&
                board[i][j + 2] == player && board[i][j + 3] == player) {
                return 1;
            }
        }
    }

    
    for (int i = 0; i <= ROWS - 4; i++) { //checks for vertical wins
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == player && board[i + 1][j] == player &&
                board[i + 2][j] == player && board[i + 3][j] == player) {
                return 1;
            }
        }
    }
    
    for (int i = 0; i <= ROWS - 4; i++) { //checks for diagonal wins
        for (int j = 0; j <= COLS - 4; j++) {
            if (board[i][j] == player && board[i + 1][j + 1] == player &&
                board[i + 2][j + 2] == player && board[i + 3][j + 3] == player) {
                return 1;//code based of AI (Chat-GPT)
            }
        }
    }

    for (int i = 0; i <= ROWS - 4; i++) { //checks for diagonal wins
        for (int j = 3; j < COLS; j++) {
            if (board[i][j] == player && board[i + 1][j - 1] == player &&
                board[i + 2][j - 2] == player && board[i + 3][j - 3] == player) {
                return 1;//code based of AI (Chat-GPT)
            }
        }
    }

    return 0;
}

int isBoardFull() { //checks if board is full 
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}