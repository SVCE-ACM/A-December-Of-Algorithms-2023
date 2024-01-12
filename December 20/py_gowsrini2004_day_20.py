import heapq
print("py_gowsrini2004_day_20\n")
def traverse(g, s, e):
    q = [(0, s, [s])]
    while q:
        tw, cc, pf = heapq.heappop(q)
        if cc == e:
            return pf
        for n, w in g.get(cc, {}).items():
            tnw = tw + w
            heapq.heappush(q, (tnw, n, pf + [n]))
    return []

graph = {
  'Cave_A': {'Cave_B': 3, 'Cave_C': 5},
  'Cave_B': {'Cave_D': 7, 'Cave_E': 1},
  'Cave_C': {'Cave_D': 3},
  'Cave_D': {'Cave_E': 5},
  'Cave_E': {}
}
start = 'Cave_A'
end = 'Cave_E'
print(traverse(graph, start, end))