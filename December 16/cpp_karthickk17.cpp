#include<bits/stdc++.h>

using namespace std;

//Check if the coordinated entered i.e x and y form a valid pair
bool check(int x, int y, int n, int m) {
    if(x >= 0 && y >= 0 && x < m && y < n) {
        return true;
    }
    return false;
}

//Calculates the time
int calculate_time (vector<vector<int>>& grid) {
    int time = 0;
    //Queue stores the coordinates of zombies
    queue<pair<int,int>> q;
    int m = grid.size(), n = grid[0].size();
    //Initalizing the queue with the zombie coordinates
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                q.push({i,j});
            }
        }
    }

    //In order to iterate through the queue and find the coordinates of the zombies to focus on, we need its count.
    int cur_queue_size = q.size(), next_queue_size = 0;

    while (q.size() != 0)
    {
        
        for (int i = 0; i < cur_queue_size; i++)
        {
            pair<int,int> coord = q.front();
            q.pop();
            int x = coord.first, y = coord.second;
            //Checking up, down, left and right
            if (check(x, y, m, n) && check(x-1, y, m, n) && grid[x-1][y] == 0)
            {
                q.push({x-1,y});
                next_queue_size++;
                grid[x-1][y] = 1;
            }
            if (check(x, y, m, n) && check(x+1, y, m, n) && grid[x+1][y] == 0)
            {
                q.push({x+1,y});
                next_queue_size++;
                grid[x+1][y] = 1;
            }
            if (check(x, y, m, n) && check(x, y-1, m, n) && grid[x][y-1] == 0)
            {
                q.push({x,y-1});
                next_queue_size++;
                grid[x][y-1] = 1;
            }
            if (check(x, y, m, n) && check(x, y+1, m, n) && grid[x-1][y+1] == 0)
            {
                q.push({x,y+1});
                next_queue_size++;
                grid[x][y+1] = 1;
            }
        }
        //If there is no change, then we can exit the loop
        if (next_queue_size == 0)
            break;
        cur_queue_size = next_queue_size;
        next_queue_size = 0;
        time++;

    }
    //To check if any human or empty cell still exists
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 0)
            {
                return -1;
            }
        }
    }
    return time;
}

int main()
{
    vector<vector<int>> grid {
                                {0, 1, 0, 0},
                                {1, 1, 1, 1},
                                {0, 1, -1, 0},
                                {0, 0, 0, 0}
                             };
    // Calling the function to calculate the time taken to infect the city
    cout << calculate_time(grid) << endl;
    return 0;
}