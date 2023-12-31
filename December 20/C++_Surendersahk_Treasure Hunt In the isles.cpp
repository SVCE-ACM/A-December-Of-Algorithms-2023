
#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

const int INF = numeric_limits<int>::max(); // Represents infinity

// Structure to represent a cave and its attributes
struct Cave {
    int cave_id;
    int distance;
    int interference;

    Cave(int id, int dist, int inter) : cave_id(id), distance(dist), interference(inter) {}
};

// Custom comparison function for the priority queue
struct Compare {
    bool operator()(const Cave& a, const Cave& b) const {
        if (a.distance == b.distance) {
            return a.interference > b.interference; // If distances are equal, prioritize lower interference
        }
        return a.distance > b.distance; // Otherwise, prioritize lower distance
    }
};

vector<int> treasure_hunt(const vector<vector<pair<int, int>>>& graph, int start, int end) {
    int num_caves = graph.size();

    vector<int> distance(num_caves, INF); // Initialize distances to infinity
    vector<int> interference(num_caves, INF); // Initialize interference levels to infinity
    vector<int> parent(num_caves, -1); // Track the parent cave for constructing the path

    priority_queue<Cave, vector<Cave>, Compare> pq;

    distance[start] = 0; // Distance from start to start is 0
    interference[start] = 0; // Interference level from start to start is 0
    pq.push(Cave(start, 0, 0));

    while (!pq.empty()) {
        Cave current = pq.top();
        pq.pop();

        int curr_cave = current.cave_id;
        int curr_dist = current.distance;

        // Explore neighbors of the current cave
        for (auto neighbor : graph[curr_cave]) {
            int next_cave = neighbor.first;
            int weight = neighbor.second;

            // Calculate the new distance and interference level
            int new_dist = curr_dist + weight;
            int new_interference = max(interference[curr_cave], weight);

            // Update if a shorter path with lower interference is found
            if (new_dist < distance[next_cave] || (new_dist == distance[next_cave] && new_interference < interference[next_cave])) {
                distance[next_cave] = new_dist;
                interference[next_cave] = new_interference;
                parent[next_cave] = curr_cave;
                pq.push(Cave(next_cave, new_dist, new_interference));
            }
        }
    }

    // Reconstruct the path from end to start
    vector<int> path;
    int current = end;
    while (current != -1) {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());

    return path;
}

int main() {
    // Example graph representation (adjacency list)
    vector<vector<pair<int, int>>> graph = {
        {{1, 3}, {2, 5}}, // Cave 0
        {{3, 2}},         // Cave 1
        {{3, 8}},         // Cave 2
        {}                // Cave 3 (end)
    };

    int start_cave = 0;
    int end_cave = 3;

    vector<int> safest_path = treasure_hunt(graph, start_cave, end_cave);

    // Output the safest path
    cout << "Safest Path: ";
    for (int cave : safest_path) {
        cout << cave << " ";
    }
    cout << endl;

    return 0;
}
