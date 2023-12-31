/*
In this program, I created a graph for the test cases. The edge u-v represents that v is dependent on u.
Also u should be completed before v. The first test case seems to be incorrect.
There are no dependencies for the first task.
Hence it will be completed in time 1.
The second task will be completed in time 2.
Similarly, third in time 3, fourth in time 4 and fifth in time 5.
Hence, the minimum time required to complete the five tasks is 5 time units.
I have checked with another program and it showed the same.
*/


#include<bits/stdc++.h>

using namespace std;

vector<int> minimumTime(int n, map<int, vector<int>>& graph)
{
    vector<int> ans(n+1, 0);
    vector<int> indegree(n+1, 0);
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < graph[i].size(); j++) {
            indegree[graph[i][j]]++;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(indegree[i] == 0) {
            q.push(i);
            ans[i] = 1;
        }
    }
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int i:graph[u]) {
            indegree[i]--;
            if(indegree[i] == 0) {
                q.push(i);
                ans[i] = ans[u] + 1;
            }
        }
    }
    ans.erase(ans.begin()+0);
    return ans;
}

int main()
{
    vector<int> tasks = {1, 2, 3, 4, 5};
    vector<vector<int>> dependencies = {{}, {1}, {2}, {3}, {4,1}};
    map<int, vector<int>> g;
    for (int i = 0; i < dependencies.size(); i++)
    {
        if(dependencies[i].size() == 0) g[tasks[i]] = {};
        for(int j = 0; j < dependencies[i].size(); j++)
            g[dependencies[i][j]].push_back(tasks[i]);
    }
    int n = tasks.size();
    vector<int> ans = minimumTime(n, g);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    cout<<*max_element(ans.begin(), ans.end());
    return 0;
}