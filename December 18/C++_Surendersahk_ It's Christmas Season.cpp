#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int MOD = 1e9 + 7;

// Structure for each node in the tree
struct Node {
    int value;
    vector<int> children;
};

// Function to perform DFS traversal and count subtrees with sum divisible by X
void dfs(int node, int currSum, int X, vector<Node>& tree, vector<unordered_map<int, int>>& dp) {
    currSum = (currSum + tree[node].value) % X;
    dp[node][currSum]++;

    for (int child : tree[node].children) {
        dfs(child, currSum, X, tree, dp);

        // Updating counts for current node's subtree
        for (auto it = dp[child].begin(); it != dp[child].end(); ++it) {
            int remainder = (it->first + currSum) % X;
            dp[node][remainder] = (dp[node][remainder] + it->second) % MOD;
        }
    }
}

// Function to count good cuttings for each number of subtrees
vector<int> countGoodCuttings(int N, int X, vector<int>& values, vector<vector<int>>& edges) {
    vector<Node> tree(N);
    vector<unordered_map<int, int>> dp(N);

    // Building the tree structure
    for (int i = 0; i < N; ++i) {
        tree[i].value = values[i];
    }

    for (const auto& edge : edges) {
        int u = edge[0], v = edge[1];
        tree[u].children.push_back(v);
    }

    // Perform DFS from the root node (index 0)
    dfs(0, 0, X, tree, dp);

    // Count good cuttings for each number of subtrees
    vector<int> result(N);
    for (int i = 0; i < N; ++i) {
        result[i] = dp[0][i % X];
    }

    return result;
}

int main() {
    int N, X;
    cout << "Enter the number of nodes: ";
    cin >> N;

    cout << "Enter Alice's favorite number (X): ";
    cin >> X;

    vector<int> values(N);
    cout << "Enter values assigned to each node:\n";
    for (int i = 0; i < N; ++i) {
        cin >> values[i];
    }

    vector<vector<int>> edges(N - 1, vector<int>(2));
    cout << "Enter edges in the tree (format: parent child):\n";
    for (int i = 0; i < N - 1; ++i) {
        cin >> edges[i][0] >> edges[i][1];
    }

    vector<int> counts = countGoodCuttings(N, X, values, edges);

    // Output the counts for each number of subtrees
    for (int i = 0; i < N; ++i) {
        cout << "Number of good cuttings with " << (i + 1) << " subtrees: " << counts[i] << endl;
    }

    return 0;
}
