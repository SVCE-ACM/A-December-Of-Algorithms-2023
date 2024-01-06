/*
    INPUT FORMAT : As specified in the question

    INPUT EXAMPLE:

    1
    8 7
    1 2 3 1 2 1 3 1
    1 2
    1 3
    2 4
    3 5
    3 6
    5 7
    6 8
    4 6
    7 8
    5 4
    7 6
    3 8
    1 2
    4 8

*/

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> v[], int x, int y) {
    v[x].push_back(y);
    v[y].push_back(x);
}

int mergeAndCount(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int inversions = 0;

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            inversions += (mid - left + 1) - i;
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }

    return inversions;
}

int mergeSortAndCount(int arr[], int left, int right) {
    int inversions = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        inversions += mergeSortAndCount(arr, left, mid);
        inversions += mergeSortAndCount(arr, mid + 1, right);
        inversions += mergeAndCount(arr, left, mid, right);
    }

    return inversions;
}

int countInversions(int arr[], int n) {
    return mergeSortAndCount(arr, 0, n - 1);
}

int printPath(vector<int> stack, int color[]) {
    int i;
    int val[(int)stack.size()];
    for (i = 0; i < (int)stack.size(); i++) {
        val[i] = color[stack[i] - 1];
    }
    int inversions = countInversions(val, (int)stack.size());
    return inversions;
}

int DFS(vector<int> v[], bool vis[], int x, int y, vector<int> stack, int color[]) {
    int res = 0;
    stack.push_back(x);
    if (x == y) {
        res = printPath(stack, color);
        return res;
    }
    vis[x] = true;
    if (!v[x].empty()) {
        for (int j = 0; j < v[x].size(); j++) {
            if (vis[v[x][j]] == false)
                res += DFS(v, vis, v[x][j], y, stack, color);
        }
    }

    stack.pop_back();
    return res;
}

int DFSCall(int x, int y, vector<int> v[], int n, vector<int> stack, int color[]) {
    int sum = 0;
    bool vis[n + 1];
    memset(vis, false, sizeof(vis));
    sum = DFS(v, vis, x, y, stack, color);
    return sum;
}

int main() {
    int T, sum1, sum2;
    cin >> T;
    while (T > 0) {
        int n, q;
        cin >> n >> q;
        int color[n];
        for (int m = 0; m < n; m++) {
            cin >> color[m];
        }
        vector<pair<int, int>> edges(n - 1);
        vector<pair<int, int>> queries(n - 1);
        for (int i = 1; i < n; ++i) {
            cin >> edges[i - 1].first >> edges[i - 1].second;
        }
        for (int j = 1; j <= q; ++j) {
            cin >> queries[j - 1].first >> queries[j - 1].second;
        }
        n += 1;
        vector<int> v[n], stack;
        for (int k = 0; k < n - 2; k++) {
            addEdge(v, edges[k].first, edges[k].second);
        }
        cout<<"\n\nOUTPUT :\n\n";
        for (int l = 0; l < q; l++) {
            sum1 = DFSCall(queries[l].first, queries[l].second, v, n, stack, color);
            sum2 = DFSCall(queries[l].second, queries[l].first, v, n, stack, color);
            cout << sum1 + sum2 << "\n";
        }
        T -= 1;
    }
    return 0;
}
