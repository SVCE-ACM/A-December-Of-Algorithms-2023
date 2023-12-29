#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    queue<pair<int, int>> rotten;
    int freshOranges = 0;
    int time = 0;

    // Count fresh oranges and store rotten oranges in the queue
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                ++freshOranges;
            } else if (grid[i][j] == 2) {
                rotten.push({i, j});
            }
        }
    }

    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!rotten.empty() && freshOranges > 0) {
        int size = rotten.size();
        for (int i = 0; i < size; ++i) {
            int x = rotten.front().first;
            int y = rotten.front().second;
            rotten.pop();

            for (const auto& dir : directions) {
                int newX = x + dir.first;
                int newY = y + dir.second;

                if (newX >= 0 && newX < rows && newY >= 0 && newY < cols &&
                    grid[newX][newY] == 1) {
                    grid[newX][newY] = 2;
                    rotten.push({newX, newY});
                    --freshOranges;
                }
            }
        }
        if (!rotten.empty()) {
            ++time;
        }
    }

    return (freshOranges == 0) ? time : -1;
}

int main() {
    int n, m;
    cout << "Enter the number of rows in the grid: ";
    cin >> n;
    cout << "Enter the number of columns in the grid: ";
    cin >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    cout << "Enter values for the grid (0 for empty, 1 for fresh oranges, 2 for rotten oranges):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    int earliestTime = orangesRotting(grid);

    if (earliestTime == -1) {
        cout << "All oranges cannot be rotten.";
    } else {
        cout << "Earliest time after which all oranges are rotten: " << earliestTime;
    }

    return 0;
}
