#include<bits/stdc++.h>
using namespace std;

vector<string> shortestPath(int n, string start, string end, map<string, map<string,int>> graph){
    priority_queue<pair<int, vector<string>>, vector<pair<int, vector<string>>>, greater<pair<int, vector<string>>>> pq;
    for (auto entry : graph[start]) {
        pq.push({entry.second, {start, entry.first}}); 
    }
    vector<string> res;
    while(!pq.empty() && pq.top().second.back() != end){
        auto temp = pq.top();
        pq.pop();
        for (auto entry : graph[temp.second.back()]) {
            vector<string> v = temp.second;
            v.push_back(entry.first);
            pq.push(make_pair(entry.second+temp.first, v)); 
        }
    }
    if(pq.size()) return pq.top().second;
    else return {"-1"};
}

int main() {
    int n;
    cin >> n;
    map<string,map<string,int>> graph;
    for(int i=0; i<n; i++){
        string a, b;
        int c;
        cin >> a >> b >> c;
        graph[a][b] = c;
    }
    string start, end;
    cin >> start >> end;
    vector<string> res = shortestPath(n, start, end, graph);
    for (auto x : res) {
        cout << x << " ";
    }
    return 0;
}
