#include <iostream>
using namespace std;

#define N 4  // Define the board size as 4x4 for the 4-queen problem

// Function to print the board
void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if it's safe to place a queen at board[row][col]
bool isSafe(int board[N][N], int row, int col) {
    // Check the same column
    for (int i = 0; i < row; i++) {
        if (board[i][col]) return false;
    }

    // Check the upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) return false;
    }

    // Check the upper-right diagonal
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j]) return false;
    }

    return true;
}

// Function to solve the 4-queen problem using backtracking
bool solve4Queens(int board[N][N], int row) {
    if (row == N) {  // Base case: all queens are placed
        printBoard(board);
        return true;
    }

    bool foundSolution = false;
    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {  // Check if it's safe to place a queen
            board[row][col] = 1;  // Place the queen
            foundSolution = solve4Queens(board, row + 1) || foundSolution;
            board[row][col] = 0;  // Backtrack and remove the queen
        }
    }
    return foundSolution;
}

int main() {
    int board[N][N] = {0};  // Initialize the board with all 0s (no queens placed)
    if (!solve4Queens(board, 0)) {
        cout << "No solution exists" << endl;
    }
    return 0;
}
