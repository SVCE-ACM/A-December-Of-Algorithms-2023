#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int MAXN = 100005; // Maximum number of nodes

vector<int> tree[MAXN];
int color[MAXN];

vector<int> eulerTour; // Euler tour of the tree
vector<int> firstOccur(MAXN, -1); // First occurrence of a node in euler tour
vector<int> idxInEuler; // Index of a node in euler tour

// Function to perform Euler tour of the tree
void dfs(int node, int parent) {
    eulerTour.push_back(color[node]);
    idxInEuler.push_back(node);

    if (firstOccur[node] == -1) {
        firstOccur[node] = eulerTour.size() - 1;
    }

    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node);
            eulerTour.push_back(color[node]);
            idxInEuler.push_back(node);
        }
    }
}

// Function to count inversions in an array
int countInversions(vector<int>& arr) {
    int inversions = 0;
    map<int, int> freq;

    for (int i = arr.size() - 1; i >= 0; --i) {
        inversions += freq.upper_bound(arr[i])->second;
        freq[arr[i]]++;
    }

    return inversions;
}

int main() {
    int N, Q;
    cin >> N; // Number of nodes in the tree

    // Input colors of nodes
    for (int i = 1; i <= N; ++i) {
        cin >> color[i];
    }

    // Input the tree edges
    for (int i = 1; i <= N - 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, -1); // Perform Euler tour starting from root node (node 1)

    // Process queries
    cin >> Q;
    for (int q = 0; q < Q; ++q) {
        int x, y;
        cin >> x >> y;

        int lcaIndex = min(firstOccur[x], firstOccur[y]);
        int rcaIndex = max(firstOccur[x], firstOccur[y]);

        vector<int> cxy(eulerTour.begin() + lcaIndex, eulerTour.begin() + rcaIndex + 1);

        int inversionsXY = countInversions(cxy);

        cout << "Inversions between " << x << " and " << y << ": " << inversionsXY * 2 << endl;
    }

    return 0;
}
