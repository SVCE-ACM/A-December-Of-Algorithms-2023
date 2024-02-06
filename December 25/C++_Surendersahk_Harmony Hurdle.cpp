#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

// Function to calculate the minimum time needed to complete all tasks
int minTime(vector<vector<int>>& dependencies, vector<int>& taskTimes) {
    int n = taskTimes.size();
    vector<int> inDegree(n, 0);
    vector<int> totalTime(n, 0);
    queue<int> q;

    // Calculate in-degrees for each task
    for (int i = 0; i < n; ++i) {
        for (int j : dependencies[i]) {
            ++inDegree[i];
        }
    }

    // Initialize queue with tasks having zero in-degree
    for (int i = 0; i < n; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
            totalTime[i] = taskTimes[i];
        }
    }

    // Perform topological sorting and calculate minimum time
    int minExecutionTime = 0;
    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int dependency : dependencies[current]) {
            totalTime[dependency] = max(totalTime[dependency], totalTime[current] + taskTimes[dependency]);
            --inDegree[dependency];

            if (inDegree[dependency] == 0) {
                q.push(dependency);
            }
        }

        minExecutionTime = max(minExecutionTime, totalTime[current]);
    }

    return minExecutionTime;
}

int main() {
    int n;
    cout << "Enter the number of tasks: ";
    cin >> n;

    vector<int> taskTimes(n);
    vector<vector<int>> dependencies(n);

    cout << "Enter the time required for each task:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> taskTimes[i];
    }

    cout << "Enter dependencies for each task (enter -1 to end input for a task):" << endl;
    for (int i = 0; i < n; ++i) {
        int dep;
        while (true) {
            cin >> dep;
            if (dep == -1) {
                break;
            }
            dependencies[i].push_back(dep);
        }
    }

    int minExecutionTime = minTime(dependencies, taskTimes);
    cout << "Minimum time needed to complete all tasks: " << minExecutionTime << " units." << endl;

    return 0;
}
