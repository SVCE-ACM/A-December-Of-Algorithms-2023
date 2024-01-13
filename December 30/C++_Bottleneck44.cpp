#include <bits/stdc++.h>

using namespace std;

const int MN = 1e5 + 7;
vector<int> adj[MN];
int a[MN], tin[MN], f[20][MN], dp[MN], timer;

struct Query {
    int l, r, idx;
    Query(int l = 0, int r = 0, int idx = 0) : l(l), r(r), idx(idx) {}
};

void dfs(int u, int p) {
    tin[u] = ++timer;
    dp[u] = dp[p] + 1, f[0][u] = p;

    for (int i = 1; i < 18; i++)
        f[i][u] = f[i - 1][f[i - 1][u]];

    for (auto v : adj[u])
        if (v != p)
            dfs(v, u);

    ++timer;
}

int lca(int u, int v) {
    if (dp[u] < dp[v])
        swap(u, v);

    for (int i = 0, diff = dp[u] - dp[v]; (1 << i) <= diff; i++)
        if (diff >> i & 1)
            u = f[i][u];

    if (u == v)
        return u;

    for (int i = 31 - __builtin_clz(dp[u]); i >= 0; i--)
        if (f[i][u] != f[i][v])
            u = f[i][u], v = f[i][v];

    return f[0][u];
}

void processMove(int u, int v, int tv, long long& val, vector<int>& cnt, long long& len) {
    auto processAdd = [&](int u) {
        val += len - cnt[a[u]];
        cnt[a[u]]++;
        len++;
    };

    auto processRmv = [&](int u) {
        val -= len - cnt[a[u]];
        cnt[a[u]]--;
        len--;
    };

    auto processRio = [&](int u, int v, bool flag) {
        int ans = lca(u, v);
        while (u != ans) {
    if (flag) {
        processAdd(u);
    } else {
        processRmv(u);
    }
    u = f[0][u];
    }
        while (v != ans) {
            v = f[0][v];
    if (flag) {
        processAdd(v);
    } else {
        processRmv(v);
    }
}
    };

    if (tv == -1) {
        int ans = lca(u, v);
        while (u != ans || v != ans) {
    if (u != ans) {
        processAdd(u);
        u = f[0][u];
    }
    if (v != ans) {
        processAdd(v);
        v = f[0][v];
    }
    }


        processAdd(ans);
    } else {
        int pants = lca(v, tv), ans = lca(u, v);
        int calc = (dp[pants] < dp[ans]) ? ans : (ans == pants ? lca(tv, u) : pants);
        processRio(tv, calc, 1);
        processRio(v, calc, 0);
    }
}

vector<long long> processQueries(int n, int q, const vector<Query>& queries) {
    int L = sqrt(n + 1.0) + 2;
    vector<long long> ans(q + 1);

    for (int i = 0; i <= L * 2; i++) {
        long long val = 0, len = 0;
        vector<int> cnt(n + 1, 0);
        int st = -1, en = -1;

        for (const auto& query : queries) {
            int u = query.l, v = query.r;

            if (st == -1)
                processMove(u, v, st, val, cnt, len);
            else
                processMove(st, en, v, val, cnt, len), processMove(v, st, u, val, cnt, len);

            ans[query.idx] = val;
            st = u, en = v;
        }
    }

    return ans;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, q;
        cin >> n >> q;

        for (int i = 1; i <= n; i++)
            adj[i].clear(), timer = 0;

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 0);
        vector<Query> queries;

        for (int i = 0; i < q; i++) {
            int u, v;
            cin >> u >> v;
            queries.emplace_back(u, v, i);
        }

        vector<long long> ans = processQueries(n, q, queries);

        for (int i = 0; i < q; i++)
            cout << ans[i] << '\n';
    }

    return 0;
}
