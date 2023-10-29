# Realise

**(Functions.c)**

**1. Initializing the Game Board (`initializeBoard`):** In this section, the `initializeBoard` function is used to fill the game board with spaces at the beginning of the game. This ensures that the game board is empty and ready for new moves. <img width="353" alt="image" src="https://github.com/ania-nunez/m431_ap23a_connect4/assets/143715027/6a798bbf-35bb-4bf9-85e5-37dbff69f67f">


**2. Displaying the Game Board (`displayBoard`):** The `displayBoard` function is used to represent the current game board on the console. It uses loops to display each cell of the game board and adds column numbers to assist players in selecting columns.<img width="349" alt="image" src="https://github.com/ania-nunez/m431_ap23a_connect4/assets/143715027/04f20284-6a1c-4be7-bc31-cc4f03d4aaa6">


**3. Checking the Validity of a Move (`isValidMove`):** Here, the `isValidMove` function is introduced, which checks if a move in a specific column is valid. It ensures that the selected column is not full and within the valid range (1 to 7).<img width="477" alt="image" src="https://github.com/ania-nunez/m431_ap23a_connect4/assets/143715027/8d443d58-3df6-4b41-9735-89e78d16f872">


**4. Executing a Game Move (`makeMove`):** The `makeMove` function is explained in this section. It places a player's game piece in the chosen column, with the piece falling into the bottommost available row.

**5. Checking for Winning Combinations (`checkWin`):** This section covers the `checkWin` function, which checks for winning combinations. It looks for horizontal, vertical, and diagonal rows of four consecutive player pieces and returns 1 if a player has won.

**6. Checking for a Draw Game (`isBoardFull`):** Here, the `isBoardFull` function is introduced, which checks if the game board is full, indicating a draw game. It traverses the game board and returns 1 if all cells are filled.

**7. Horizontal Win Checks (`checkWin`):** This section highlights how the `checkWin` function checks for horizontal winning combinations by searching for four consecutive player pieces in each row.

**8. Vertical Win Checks (`checkWin`):** Here, it explains how `checkWin` determines vertical winning combinations within the columns by examining each column for four consecutive player pieces.

**9. Diagonal Win Checks (`checkWin`):** This section deals with checking for diagonal winning combinations in two different directions - positive and negative slopes. `checkWin` searches for four consecutive player pieces in diagonal orientation and returns 1 if such a combination is found.

The code shown is an example of the use of header files in programming, particularly in the C or C++ programming languages. A header file typically contains declarations of functions, variables, and other elements to be used in various parts of a program.

**(Functions.h)**

1. `#ifndef FUNCTIONS_H`
   - This is a preprocessor directive (macro) called "ifndef" (if not defined) used to avoid double definitions of header files. If `FUNCTIONS_H` is already defined, the subsequent code in the header is not reinserted.

2. `#define FUNCTIONS_H`
   - This is another preprocessor directive that defines `FUNCTIONS_H`. It ensures that the code in the header is inserted only once in a specific translation unit. If the `FUNCTIONS_H` macro is already defined, the code in the header is skipped.

3. `void displayBoard();`
   - Here, the declaration of a function named `displayBoard` is provided. This function has no body (no implementation) in the header. It is used in other parts of the program and is defined elsewhere.

4. `void initializeBoard();`
   - This is another function declaration for `initializeBoard`, similar to `displayBoard`.

5. `int isValidMove(int col);`
   - Here, a function declaration for `isValidMove` with an argument `col` is created. This function is expected to return an `int` as its return value.

6. `int checkWin(char player);`
   - This is a function declaration for `checkWin` that uses a character `player` as an argument and has an `int` as its return value.

7. `int isBoardFull();`
   - Here, a function declaration for `isBoardFull` is created, which doesn't require any arguments and returns an `int`.

8. `#endif`
   - This terminates the condition that began with `#ifndef FUNCTIONS_H`. The header code is now fully defined.

By using preprocessor directives and header files, these function declarations can be used in different source code files without the header code being inserted multiple times. If you want to use these functions in your program, you need to implement them elsewhere in the code by adding the body of the functions. This header serves as a means to provide the interfaces for the mentioned functions in your program.

**(functions2.c)**

1. `#include <stdio.h>`:
   - This is a preprocessor directive that includes the standard library `stdio.h` in the program. It is used for input and output operations like `printf`.

2. `#define ROWS 6` and `#define COLS 7`:
   - These directives define constants for the number of rows (`ROWS`) and columns (`COLS`) of the game board. In this case, the game board has 6 rows and 7 columns.

3. `char board[ROWS][COLS]`:
   - Here, a two-dimensional character array `board` is defined to represent the game board. Each element of the array corresponds to a game board position and is initialized with a space.

4. `void initializeBoard()`:
   - This function initializes the game board by filling all cells with spaces. This is the initial state of the game board.

5. `void displayBoard()`:
   - This function is used to display the game board on the screen. It uses loops to iterate through each cell and presents it in a tabular form.

6. `int isValidMove(int col)`:
   - This function checks whether a move in the specified column `col` is valid. A move is valid if the column is not full and the player can place their piece in that column.

7. `void makeMove(int col, char player)`:
   - This function places the player's game piece in the specified column `col`. It searches from the bottom to the top of the column for the first empty cell and places the game piece there.

8. `int checkWin(char player)`:
   - This function checks whether the player `player` has won the game. It examines horizontal, vertical, and diagonal winning possibilities. If the player has won, the function returns `1`, otherwise `0`.

9. `int isBoardFull()`:
   - This function checks if the game board is full, meaning there are no more empty cells. If the game board is full, it returns `1`; otherwise, it returns `0`.

This code allows for playing Connect Four between two players. The game board is initialized, and then players take turns making their moves, with the validity of the moves and determination of winners checked. The `displayBoard` function is used to show the current game board state. This provides a foundation for implementing the Connect Four game in C.

**(functions2.h)**

The code you posted is part of a header file in programming, likely in the C or C++ programming language. This header file contains function declarations and is typically combined with other source code files to create a complete program. Let me explain the use and meaning of this code:

1. `#ifndef FUNCTIONS_H` and `#define FUNCTIONS_H`:
   These two directives go together

 and are used to ensure that the header code is not inserted into the program multiple times. The name "FUNCTIONS_H" acts as a guard against duplicate inclusions (known as a "Header Guard").

   - `#ifndef FUNCTIONS_H`: This preprocessor command checks whether the symbol `FUNCTIONS_H` is not defined. If it's not defined, the subsequent code block is executed.
   - `#define FUNCTIONS_H`: If `FUNCTIONS_H` is not defined, it's defined here. This prevents the code within the header from being included again if it has already been included elsewhere in your program.

2. The listed functions:
   In this header file, several functions are declared but not implemented. The actual implementations of these functions must be done in another source code file.

   - `void displayBoard();`: This function seems to be responsible for displaying a game board.
   - `void initializeBoard();`: This function is likely used to initialize the game board.
   - `int isValidMove(int col);`: This function probably checks whether a move in a specific column is valid.
   - `int checkWin(char player);`: This function appears to check whether a player has won by analyzing the game board.
   - `int isBoardFull();`: This function checks whether the game board is full, indicating a draw game.

These declarations allow other parts of the program to access these functions without knowing their exact implementations. The actual implementations of these functions are typically written in a separate source code file (.c or .cpp) and then linked with the header file to create a complete executable program.

**(main.c)**

1. First, some required header files and a custom header file "functions.h" are included. This indicates that there are functions defined in this header file that are used in the main program.

2. Macros are defined: `ROWS` and `COLS`, which set the number of rows and columns on the game board. In this case, the game board has 6 rows and 7 columns.

3. In the `main` function, several variables are initialized, including `currentPlayer` to keep track of the current player (Player 1 or Player 2) and `column` to store the column where the player wants to place their game piece.

4. The `initializeBoard()` function is called, presumably initializing the game board. The details of this function are in the "functions.h" file.

5. The game start is displayed on the console.

6. An infinite loop (`while (1)`) begins, controlling the game. In each iteration, the game board is displayed.

7. The current player is prompted to input their move by providing a column number (1-7). The input is captured with `scanf` and stored in the `column` variable.

8. It checks whether the entered move is valid by calling the `isValidMove(column)` function. This function likely checks if the selected column still has space for more game pieces.

9. If the move is valid, the `makeMove(column, (currentPlayer == 1) ? 'X' : 'O')` function is called to place the game pieces of the current player on the game board. The condition `(currentPlayer == 1) ? 'X' : 'O'` determines which game piece to place, depending on the current player (either 'X' or 'O').

10. After making a move, it checks whether the current player has won the game using `checkWin((currentPlayer == 1) ? 'X' : 'O')`. This function checks if the player won during this round.

11. It also checks whether the game board is full using `isBoardFull()`. If the game board is full and no player has won, the game ends in a draw.

12. Finally, it switches the current player (from Player 1 to Player 2, or vice versa) for the next turn.

13. If the entered move is not valid (in the `else` part), it prints an error message.

14. After the game loop, the program uses `system("pause")` to pause the program, allowing the user to see the final result before closing the console window.

15. `return 0;`: This line indicates that the program has executed successfully and returns a status code of 0.

This program is a basic console-based implementation of Connect Four, allowing two players to take turns and play the game until one of them wins or it results in a draw. The specific implementation details of functions like `initializeBoard`, `displayBoard`, `isValidMove`, `makeMove`, `checkWin`, and `isBoardFull` are located in the "functions.h" file.

**(main2.c)**

1. `#include <stdio.h>`: This is a preprocessor directive that includes the standard input/output library, which is necessary for functions like `printf` and `scanf`.

2. `#include "functions2.h"`: This includes a user-defined header file named "functions2.h". This header file likely contains function prototypes, variable declarations, or other code that is necessary for this program to work. It is common to separate code into different files for better organization.

3. `#define ROWS 6` and `#define COLS 7`: These are preprocessor macros that define constants. `ROWS` is set to 6, and `COLS` is set to 7. These constants are used to define the dimensions of the game board, with 6 rows and 7 columns.

4. `int main()`: This is the main function of the program. It's the starting point of execution for a C program.

5. `int currentPlayer = 1;` and `int column;`: These are integer variables used to keep track of the current player (Player 1 or Player 2) and the column where the player wants to drop their piece, respectively.

6. `initializeBoard();`: This is likely a function call that initializes the game board. The details of this function are in the "functions2.h" file.

7. `printf("Welcome to Connect Four!\n");`: This line prints a welcome message to the console.

8. The code enters a `while(1)` loop, which creates an infinite loop. This loop is the core of the game, where players take turns.

9. `displayBoard();`: This function, presumably defined in "functions2.h," displays the current state of the game board on the console.

10. The program asks the current player to enter their move by displaying a prompt with `printf`, and it reads the player's input with `scanf`.

11. `isValidMove(column)` is likely a function that checks whether the move is valid. If it's not a valid move, it displays an error message, and the player must try again.

12. If the move is valid, the program uses `makeMove(column, (currentPlayer == 1) ? 'X' : 'O')` to place the player's piece ('X' or 'O') in the specified column.

13. The code then checks if the current player has won the game with `checkWin`. If they have, it displays a victory message and exits the game.

14. If the game is not won, it checks if the board is full with `isBoardFull()`. If the board is full, it declares a draw and exits the game.

15. Finally

, the code switches the current player (from Player 1 to Player 2, or vice versa) for the next turn.

16. If the move is not valid (in the `else` part), it prints an error message.

17. After the game loop, the program uses `system("pause")` to pause the program, allowing the user to see the final result before closing the console window.

18. `return 0;`: This line indicates that the program has executed successfully and is returning a status code of 0.

This program is a simple console-based implementation of Connect Four, allowing two players to take turns and play the game until one of them wins or it results in a draw. The specific implementation details of functions like `initializeBoard`, `displayBoard`, `isValidMove`, `makeMove`, `checkWin`, and `isBoardFull` are located in the "functions2.h" file.

Issues: We had Issues using the VS code connected to the git hub so we needed to upload everything manualy.
