#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<int>& board, int row, int col) {
    for (int i = 0; i < row; ++i) {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row) {
            return false;
        }
    }
    return true;
}

void solveNQueens(vector<vector<int>>& solutions, vector<int>& board, int row, int n) {
    if (row == n) {
        solutions.push_back(board);
        return;
    }

    for (int col = 0; col < n; ++col) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            solveNQueens(solutions, board, row + 1, n);
        }
    }
}

void printSolutions(vector<vector<int>>& solutions) {
    for (int i = 0; i < solutions.size(); ++i) {
        cout << "Solution " << i + 1 << ":\n";
        for (int row = 0; row < solutions[i].size(); ++row) {
            for (int col = 0; col < solutions[i].size(); ++col) {
                if (solutions[i][row] == col) {
                    cout << "Q ";
                } else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of N for the N-Queens problem: ";
    cin >> n;

    vector<vector<int>> solutions;
    vector<int> board(n, -1);

    solveNQueens(solutions, board, 0, n);

    if (solutions.empty()) {
        cout << "No solutions found for N = " << n << endl;
    } else {
        cout << "All possible solutions for N = " << n << ":\n";
        printSolutions(solutions);
    }

    return 0;
}
