#include<bits/stdc++.h>

using namespace std;


vector<int> findMinTime(int numTasks, map<int, vector<int>>& taskGraph) {
    vector<int> taskTimes(numTasks + 1, 0);
    vector<int> incomingCounts(numTasks + 1, 0);
    queue<int> readyTasks;  

    for (int task = 1; task <= numTasks; ++task) {
        for (int dep : taskGraph[task]) {
            incomingCounts[dep]++;
        }
    }

    for (int task = 1; task <= numTasks; ++task) {
        if (incomingCounts[task] == 0) {
            readyTasks.push(task);
            taskTimes[task] = 1; 
        }
    }

    while (!readyTasks.empty()) {
        int currentTask = readyTasks.front();
        readyTasks.pop();

        for (int dependentTask : taskGraph[currentTask]) {
            incomingCounts[dependentTask]--;
            if (incomingCounts[dependentTask] == 0) {
                readyTasks.push(dependentTask);
                taskTimes[dependentTask] = taskTimes[currentTask] + 1;
            }
        }
    }

    taskTimes.erase(taskTimes.begin()); 
    return taskTimes;
}

int main() {
    int numTasks;
    cout << "Enter the number of tasks: ";
    cin >> numTasks;

    vector<int> tasks(numTasks);
    cout << "Enter the tasks: ";
    for (int& task : tasks) {
        cin >> task;
    }

    map<int, vector<int>> taskGraph;
    cout << "Enter the dependencies: ";
    for (int i = 0; i < numTasks; ++i) {
        int dependentTask;
        vector<int> dependencies;

        cin >> dependentTask;
        while (cin.peek() != '\n') {
            int dependency;
            cin >> dependency;
            dependencies.push_back(dependency);
        }

        taskGraph[dependentTask] = dependencies;
    }

    vector<int> minTimes = findMinTime(numTasks, taskGraph);

    cout << *max_element(minTimes.begin(), minTimes.end());

    return 0;
}

