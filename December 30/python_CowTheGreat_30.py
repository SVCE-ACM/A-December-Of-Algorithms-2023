def dfs(node, parent, colors, tree, in_count, out_count, depth):
    in_count[node] = [0] * depth
    out_count[node] = [0] * depth
    in_count[node][colors[node] - 1] = 1

    for child in tree[node]:
        if child == parent:
            continue
        dfs(child, node, colors, tree, in_count, out_count, depth)
        for i in range(depth):
            in_count[node][i] += in_count[child][i]
            out_count[node][i] += out_count[child][i]
    out_count[node][colors[node] - 1] += 1

def solve_queries(tree, in_count, out_count, depth, queries):
    result = []
    for query in queries:
        x, y = query
        x -= 1
        y -= 1
        total_inversions = 0
        for i in range(depth):
            total_inversions += abs(in_count[x][i] - in_count[y][i]) + abs(out_count[x][i] - out_count[y][i])
        result.append(total_inversions // 2)
    return result

T = int(input())
for _ in range(T):
    N, Q = map(int, input().split())
    colors = list(map(int, input().split()))
    tree = {i: [] for i in range(N)}
    for _ in range(N - 1):
        X, Y = map(int, input().split())
        tree[X - 1].append(Y - 1)
        tree[Y - 1].append(X - 1)
    in_count = {}
    out_count = {}
    dfs(0, -1, colors, tree, in_count, out_count, max(colors))
    queries = [tuple(map(int, input().split())) for _ in range(Q)]
    result = solve_queries(tree, in_count, out_count, max(colors), queries)

    for res in result:
        print(res)