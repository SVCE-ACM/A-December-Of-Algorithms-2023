#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col)
{
    int i, j;
    int N = board.size();
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;
 
    return true;
}

bool n_queen(int n, vector<vector<int>>& board, int col, vector<vector<pair<int, int>>>& ans) {
    if(col >= n) {
        vector<pair<int,int>> temp;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == 1) {
                    temp.push_back({i+1,j+1});
                }
            } 
        }
        ans.push_back(temp);
        return true;
    }
    bool res = false;
    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            res = n_queen(n, board, col + 1, ans) || res;
            board[i][col] = 0; 
        }
    }
    return res;
}

void driver(int n, vector<vector<int>>& board, vector<vector<pair<int, int>>>& ans) {
    
    if(!n_queen(n, board, 0, ans)) {
        cout << "No Solution found!" << endl;
        return;
    }
    else {
        sort(ans.begin(), ans.end());
        for(vector<pair<int,int>> sol: ans) {
            for(pair<int,int> coord: sol) {
                cout<<"("<<coord.first<<","<<coord.second<<") ";
            }
            cout<<endl;
        }
        return;
    }
}


int main() {
    int n = 8;
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<pair<int, int>>> ans;
    driver(n, board, ans);
    return 0;
}
