import heapq
def hunt(graph, start, end):
    l = [(0, start, [start])]
    while l:
        a, b, c = heapq.heappop(l)
        if b == end:
            return c
        for i, j in graph.get(b, {}).items():
            t = a + j
            heapq.heappush(l, (t, i, c + [i]))
    return []

graph = {
  'Cave_A': {'Cave_B': 3, 'Cave_C': 5},
  'Cave_B': {'Cave_D': 7, 'Cave_E': 1},
  'Cave_C': {'Cave_D': 3},
  'Cave_D': {'Cave_E': 5},
  'Cave_E': {}
  }
start_cave = 'Cave_A'
end_cave   = 'Cave_E'
print(hunt(graph, start_cave, end_cave))