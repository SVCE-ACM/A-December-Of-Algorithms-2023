#include <bits/stdc++.h>
using namespace std;

string min_dist(map<string,int>& distances, set<string>& spt_set) {
    int n = distances.size();
    string u;
    int min = INT_MAX;
    for (auto it: distances)
    {
        if (it.second < min && spt_set.find(it.first) == spt_set.end())        
        {
            u = it.first;
            min = it.second;
        }
    }
    return u;
}

void dijkstra(map<string, map<string, int>>& graph, map<string,int>& distances, map<string,string>& prev_node, set<string>& spt_set) {
    int n = graph.size();
    for (int i = 0; i < n-1; i++)
    {
        string u = min_dist(distances, spt_set);
        spt_set.insert(u);
        for (auto it:graph[u])
        {
            if (spt_set.find(it.first) == spt_set.end() && (distances[u] + it.second < distances[it.first]))
            {
                distances[it.first] = distances[u] + it.second;
                prev_node[it.first] = u;
            }
        }
    }
}

void print_path(map<string, string>& prev_node, string end_cave) {
    if (end_cave == "")
    {
        return;
    }
    string prev_cave = prev_node[end_cave];
    print_path(prev_node, prev_cave);
    cout << end_cave <<" ";
}

int main() {
//--------------------Input-----------------------------------
    map<string, map<string, int>> graph = {
        {{"Cave_A"},
            {
                {{"Cave_B"},{3}},
                {{"Cave_C"}, {7}}
            }
        },
        {{"Cave_B"},
            {
                {{"Cave_D"},{7}},
                {{"Cave_E"}, {1}}
            }
        },
        {{"Cave_C"},
            {
                {{"Cave_D"},{3}},
            }
        },
        {{"Cave_D"},
            {
                {{"Cave_E"},{5}},
            }
        },
        {{"Cave_E"},
            {}
        }
    };
    string start_cave = "Cave_A";
    string end_cave = "Cave_E";
    int n = graph.size();
//------------------------------------------------------------    
    set<string> spt_set;
    map<string,int> distances {
        {{"Cave_A"},{INT_MAX}},
        {{"Cave_B"},{INT_MAX}},
        {{"Cave_C"},{INT_MAX}},
        {{"Cave_D"},{INT_MAX}},
        {{"Cave_E"},{INT_MAX}}
    };
    map<string,string> prev_node {
        {{"Cave_A"},{}},
        {{"Cave_B"},{}},
        {{"Cave_C"},{}},
        {{"Cave_D"},{}},
        {{"Cave_E"},{}}
    };
    distances[start_cave] = 0;
    dijkstra(graph, distances, prev_node, spt_set);
//------------------------------------------------------------
    print_path(prev_node, end_cave);
    cout << endl;
    return 0;
}
