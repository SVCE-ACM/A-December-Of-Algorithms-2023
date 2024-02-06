#include<bits/stdc++.h>

using namespace std;

void dfs(int src, int par, vector<int> edges[], vector<int>& arr) {
    for (auto ch : edges[src]) {
        if (ch == par) continue;
        dfs(ch, src, edges, arr);
        arr[src] += arr[ch];
    }
}

int nCr(int n, int r) {
    if (r > n) return 0;
    
    if (r == 0 || n == r) return 1;
    
    double res = 0;
    for (int i = 0; i < r; i++) {
  
        res += log(n-i) - log(i+1);
    }
    return (int)round(exp(res));
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector <int> arr(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector <int> edges [n+1];
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        dfs(1,-1, edges, arr);
        if (arr[1]%x != 0) {
            for (int i = 1; i <= n; i++) 
            cout << 0 << " "; 
            cout << endl;
            return 0;
        }
       
        int ct = 0;
        for (int i = 2; i <= n; i++) if (arr[i]%x == 0) ct++;

        for (int i = 1; i <= n; i++) cout << nCr(ct, i-1) << " "; cout << endl;
    }
    return 0;
}
