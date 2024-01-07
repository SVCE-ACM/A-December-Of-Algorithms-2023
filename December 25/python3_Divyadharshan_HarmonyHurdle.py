from collections import defaultdict, deque

def min_time(tasks, deps):
    g, in_deg, d = defaultdict(list), [0] * len(tasks), [0] * len(tasks)

    for i, dep in enumerate(deps):
        for d in dep:
            g[d].append(i)
            in_deg[i] += 1

    o, q = [], deque([i for i in range(len(tasks)) if in_deg[i] == 0])

    while q:
        t = q.popleft()
        o.append(t)

        for n in g[t]:
            in_deg[n] -= 1
            d[n] = max(d[n], d[t] + 1)

            if in_deg[n] == 0:
                q.append(n)

    mt = max(d)

    for t in o:
        mt += 1 + d[t]

    return mt

t1 = [1, 2, 3, 4, 5]
d1 = [[], [1], [2], [3], [4, 1]]
print(min_time(t1, d1))

t2 = [1, 2, 3, 4, 5]
d2 = [[], [1], [2], [3], [4]]
print(min_time(t2, d2))
