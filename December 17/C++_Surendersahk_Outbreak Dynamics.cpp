#include <iostream>
#include <vector>
#include <queue>

struct Point {
    int x, y;
    Point(int _x, int _y) : x(_x), y(_y) {}
};

int minHoursToInfect(std::vector<std::vector<int>>& grid) {
    int rows = grid.size();
    if (rows == 0) return -1; // Empty grid

    int cols = grid[0].size();
    std::queue<Point> zombies;

    int totalHumans = 0; // Count total humans
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                zombies.push(Point(i, j));
            } else if (grid[i][j] == 0) {
                ++totalHumans;
            }
        }
    }

    if (totalHumans == 0) return 0; // No humans to infect

    int hours = 0;
    std::vector<std::vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!zombies.empty()) {
        int numZombies = zombies.size();

        for (int i = 0; i < numZombies; ++i) {
            Point curr = zombies.front();
            zombies.pop();

            for (const auto& dir : directions) {
                int newX = curr.x + dir[0];
                int newY = curr.y + dir[1];

                if (newX >= 0 && newX < rows && newY >= 0 && newY < cols &&
                    grid[newX][newY] == 0) { // Check if the cell is a human
                    grid[newX][newY] = 1; // Infect the human
                    zombies.push(Point(newX, newY));
                    --totalHumans;
                }
            }
        }

        ++hours;

        if (totalHumans == 0) return hours; // All humans infected
    }

    return -1; // Unable to infect all humans
}

int main() {
    std::vector<std::vector<int>> city = {
        {0, 0, 0, 0, 1},
        {0, 1, 0, 1, -1},
        {0, 0, 0, -1, 1},
        {0, 1, 0, 0, 0}
    };

    int minHours = minHoursToInfect(city);
    if (minHours == -1) {
        std::cout << "It's not possible to infect all humans.\n";
    } else {
        std::cout << "Minimum time to infect all humans: " << minHours << " hours.\n";
    }

    return 0;
}
