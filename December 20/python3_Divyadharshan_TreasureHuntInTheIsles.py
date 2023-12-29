import heapq
def hunt(g, s, e):
    q = [(0, s, [s])]
    while q:
        tw, cc, pf = heapq.heappop(q)
        if cc == e:
            return pf
        for n, w in g.get(cc, {}).items():
            tnw = tw + w
            heapq.heappush(q, (tnw, n, pf + [n]))
    return []

graph={
    'Cave_A': {'Cave_B': 4, 'Cave_C': 6},
    'Cave_B': {'Cave_C': 2, 'Cave_D': 5, 'Cave_E': 8},
    'Cave_C': {'Cave_A': 6, 'Cave_D': 7},
    'Cave_D': {'Cave_B': 5, 'Cave_E': 3},
    'Cave_E': {}
}
start_cave2 = 'Cave_B'
end_cave2 = 'Cave_E'
print(hunt(graph, start_cave2, end_cave2))
