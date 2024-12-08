//write a n - queen program from start

#include <iostream>
#include <vector>
#include <algorithm>
    using namespace std;

bool isSafe(vector<vector<int>> &board, int row, int col)
{

    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (int i = row, j = col; i < board.size() && j >= 0; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

void printSolution(vector<vector<int>> &board, int col)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < col; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

bool solveNQueens(vector<vector<int>> &board, int col)
{
    if (col >= board.size())
        return true;

    for (int i = 0; i < board.size(); i++)
    {
        if (isSafe(board, i, col))
        {
            board[i][col] = 1;

            if (solveNQueens(board, col + 1))
                return true;

            board[i][col] = 0;
        }
    }

    return false;
}

int main()
{
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));

    if (solveNQueens(board, 0))
        printSolution(board, n);
    else
        cout << "Solution does not exist" << endl;

    return 0;
}