import sys

sys.setrecursionlimit(10 ** 6)

N = 100000
MOD = 10 ** 9 + 7
f = [0] * (N + 1)
invf = [0] * (N + 1)

def dfs(node, p, g, a, x):
    for c in g[node]:
        if c != p:
            dfs(c, node, g, a, x)
            a[node] += a[c]
            if a[node] >= x:
                a[node] -= x

def powmod(a, b, mod):
    res = 1
    a %= mod
    while b:
        if b & 1:
            res = res * a % mod
        a = a * a % mod
        b >>= 1
    return res

def cn(u, v, MOD):
    if u > v:
        return 0
    if u == v:
        return 1
    if u == 1 or u + 1 == v:
        return v
    return f[v] * invf[u] % MOD * invf[v - u] % MOD

def dfs_count(node, p, g, a):
    cnt = 1 if a[node] == 0 else 0
    for c in g[node]:
        if c != p:
            cnt += dfs_count(c, node, g, a)
    return cnt

def solve():
    global N, MOD, f, invf
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    a = [ai % x for ai in a]
    g = [[] for _ in range(n)]
    for _ in range(n - 1):
        u, v = map(int, input().split())
        u -= 1
        v -= 1
        g[u].append(v)
        g[v].append(u)

    dfs(0, -1, g, a, x)
    
    if a[0] != 0:
        print(' '.join(['0'] * n))
        return
    
    result = [1]
    cnt = dfs_count(0, -1, g, a)
    
    for i in range(2, n + 1):
        result.append(cn(i - 1, cnt - 1, MOD))
    
    print(' '.join(map(str, result)))

def main():
    global N, MOD, f, invf
    f[0] = 1
    
    for i in range(1, N + 1):
        f[i] = f[i - 1] * i % MOD
    
    invf[N] = powmod(f[N], MOD - 2, MOD)
    
    for i in range(N, 0, -1):
        invf[i - 1] = invf[i] * i % MOD
    
    t = int(input())
    
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
