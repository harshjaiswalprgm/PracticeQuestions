#include <iostream>
#include <vector>
using namespace std;
void printBoard(const vector<vector<int>>& board) {
    for (const auto& row : board) {
        for (int cell : row) {
            cout << (cell ? "Q":".");
        }
        cout << endl;
    }
    cout << endl;
}
bool isSafe(const vector<vector<int>>& board, int row, int col, int n) {
    // Check this column
    for (int i = 0; i < row; ++i) {
        if (board[i][col]) return false;
    }

    // Check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j]) return false;
    }

    // Check upper-right diagonal
    for (int i = row, j = col; i >= 0 && j < n; --i, ++j) {
        if (board[i][j]) return false;
    }
    return true;
}
bool solveNQueens(vector<vector<int>>& board, int row, int n) {
    if (row == n) {
        printBoard(board); 
        return true;
    
    }

    bool foundSolution = false;
    for (int col = 0; col < n; ++col) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1; // Place queen
            foundSolution |= solveNQueens(board, row + 1, n); // Recur for the next row
            board[row][col] = 0; // Backtrack
        }
    }
    return foundSolution;
}

int main() {
    int n;
    cout << "Enter the value of N to generate teh n*n queen : ";
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n, 0));
    if (!solveNQueens(board, 0, n)) {
        cout << "No solution exists for N = " << n << endl;
    }
    return 0;
}