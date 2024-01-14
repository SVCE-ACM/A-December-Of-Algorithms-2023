#include <bits/stdc++.h>
using namespace std;
 
const int maxN = 1e5 + 5;
const int MOD = 1e9 + 7;
int n, x, cnt;
long long a[maxN], ans[maxN], dp[maxN], tot, f[maxN], g[maxN], inv[maxN];
vector<int> adj[maxN];
 
void dfs(int u, int p) {
	for (auto v : adj[u]) {
		if (v != p) {
			dfs(v, u);
			dp[u] = (dp[u] + dp[v]) % x;
		}
	}
	if (p > 0 && dp[u] == 0) cnt++;
}
 
long long temp(long long n, long long k) {
	if (n < 0 || k < 0) return 0;
	long long ans = f[n];
	ans *= g[n - k]; ans %= MOD;
	ans *= g[k]; ans %= MOD;
	return ans;
}
 
int main () {
	f[0] = 1; f[1] = 1; g[0] = 1; g[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < maxN; i ++) {
		inv[i] = inv[MOD % i] * (MOD - MOD / i) % MOD;
	}
	for (int i = 2; i < maxN; i ++) {
		f[i] = f[i - 1] * i % MOD;
		g[i] = g[i - 1] * inv[i] % MOD;
	}
	int T; 
	cin >> T;
	while (T--) {
		
		cin >> n >> x;
		for (int i = 0; i <= n; i++) ans[i] = 0, dp[i] = 0, adj[i].clear();
		tot = 0; 
		cnt = 0;
		
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			dp[i] = a[i] % x;
			tot += a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			int u, v; cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		if (tot % x) {
			for (int i = 0; i < n; i++) cout << "0" << " \n"[i == n - 1];
			continue;
		}
		dfs(1, 0);
		for (int i = 0; i < n; i++) {
			if (i <= cnt) cout << temp(cnt, i) << ' ';
			else cout << "0 ";
		}
		cout << '\n';
	}
	return 0;
}
