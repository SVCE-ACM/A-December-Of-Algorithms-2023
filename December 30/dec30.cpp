#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int n, vector<int> tree[], int start, int end) {
    vector<int> distance(n+1, -1);
    vector<int> parent(n+1, -1);

    queue<int> q;
    q.push(start);
    distance[start] = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : tree[current]) {
            if (distance[neighbor] == -1) {
                distance[neighbor] = distance[current] + 1;
                parent[neighbor] = current;
                q.push(neighbor);
            }
        }
    }

    vector<int> path;
    int current = end;

    while (current != start) {
        path.push_back(current);
        current = parent[current];
    }

    path.push_back(start);
    reverse(path.begin(), path.end());

    return path;
}

int inversions = 0;
void merge(int left, int mid, int right, vector<int>& arr) {
    int i = left, j = mid+1, n = right-left+1;
    vector<int> merged;
    while (i <= mid && j <=right)
    {
        if (arr[i] <= arr[j]) {
            merged.push_back(arr[i]);
            i++;
        }
        else {
            merged.push_back(arr[j]);
            inversions += (mid-i+1);
            j++;
        }
    }
    while (i <= mid) {
        merged.push_back(arr[i]);
        i++;
    }
    while (j <= right) {
        merged.push_back(arr[j]);
        j++;
    }
    for (int p = 0; p < n; ++p) {
        arr[left + p] = merged[p];
    }
}

void merge_sort(int left, int right, vector<int>& arr) {
    if(left >= right)
        return ;
    int mid = (left+right)/2;
    merge_sort(left, mid, arr);
    merge_sort(mid+1, right, arr);
    merge(left, mid, right, arr);
}

int main() {
    int n; 
    int q; 
    cin >> n;
    cin >> q;

    unordered_set<int> nodes;
    vector<int> color(n+1); // Colors of each vertices
    for (int i = 1; i <= n; i++)
    {
        cin >> color[i];
        nodes.insert(i);
    }

    vector<int> tree[n+1];
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    while(q > 0)
    {
        int x, y; // Starting and ending nodes of the path
        cin >> x >> y;

        vector<int> path = shortestPath(n, tree, x, y);
        vector<int> query_path;
        for (int node : path) {
            query_path.push_back(color[node]);
        }
        vector<int> query_path_reverse(query_path.begin(), query_path.end());
        reverse(query_path_reverse.begin(), query_path_reverse.end());
        inversions = 0;
        merge_sort(0, path.size() - 1, query_path);
        int f = inversions;
        inversions = 0;
        merge_sort(0, path.size() - 1, query_path_reverse);
        f += inversions;
        cout << f << endl;
        q--;
    }

    return 0;
}
