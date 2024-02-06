#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int MOD = 1e9 + 7;

struct Node {
    int value;
    vector<int> children;
};

void dfs(int node, int currSum, int X, vector<Node>& tree, vector<unordered_map<int, int>>& dp) {
    currSum = (currSum + tree[node].value) % X;
    dp[node][currSum]++;

    for (int child : tree[node].children) {
        dfs(child, currSum, X, tree, dp);

        for (auto it = dp[child].begin(); it != dp[child].end(); ++it) {
            int remainder = (it->first + currSum) % X;
            dp[node][remainder] = (dp[node][remainder] + it->second) % MOD;
        }
    }
}

vector<int> countGoodCuttings(int N, int X, vector<int>& values, vector<vector<int>>& edges) {
    vector<Node> tree(N);
    vector<unordered_map<int, int>> dp(N);

    for (int i = 0; i < N; ++i) {
        tree[i].value = values[i];
    }

    for (const auto& edge : edges) {
        int u = edge[0], v = edge[1];
        tree[u].children.push_back(v);
    }

    dfs(0, 0, X, tree, dp);
    vector<int> result(N);
    for (int i = 0; i < N; ++i) {
        result[i] = dp[0][i % X];
    }

    return result;
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> values(N);
    for (int i = 0; i < N; ++i) {
        cin >> values[i];
    }

    vector<vector<int>> edges(N - 1, vector<int>(2));
    for (int i = 0; i < N - 1; ++i) {
        cin >> edges[i][0] >> edges[i][1];
    }

    vector<int> counts = countGoodCuttings(N, X, values, edges);

    for (int i = 0; i < N; ++i) {
        cout << counts[i] << " ";
    }

    return 0;
}