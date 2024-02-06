"""
First set of output is the sample input-output of testcase 1 in the question"

It is followed by a prompt for user input for the graph,start and end caves

************************ INPUT FORMAT Example*************

Line 1 of input:
{'Cave_A': {'Cave_B': 4, 'Cave_C': 6},'Cave_B': {'Cave_C': 2, 'Cave_D': 5, 'Cave_E': 8},'Cave_C': {'Cave_A': 6, 'Cave_D': 7},'Cave_D': {'Cave_B': 5, 'Cave_E': 3},'Cave_E': {}}

Eval is used so give the dictionary in one line without line breaks.

Line 2 of input - Start cave:
Cave_B

Line 3 of input - End cave:
Cave_C

"""


class Cave:
    def __init__(self, name, interference):
        self.name = name
        self.interference = interference

def treasure_hunt(graph, weights, num_caves, start, end):
    distance = [float('inf')] * num_caves
    interference = [float('inf')] * num_caves
    visited = [0] * num_caves
    parent = [-1] * num_caves

    start_index = -1
    end_index = -1

    for i in range(num_caves):
        distance[i] = float('inf')
        interference[i] = float('inf')
        visited[i] = 0
        parent[i] = -1

        if graph[i].name == start:
            start_index = i
        if graph[i].name == end:
            end_index = i

    distance[start_index] = 0
    interference[start_index] = 0

    for i in range(num_caves - 1):
        min_interference = float('inf')
        current_index = -1

        for j in range(num_caves):
            if not visited[j] and interference[j] < min_interference:
                min_interference = interference[j]
                current_index = j

        visited[current_index] = 1

        for j in range(num_caves):
            if not visited[j] and weights[current_index][j] != -1:
                total_distance = distance[current_index] + weights[current_index][j]
                total_interference = interference[current_index] + graph[j].interference

                if total_interference < interference[j] or (total_interference == interference[j] and total_distance <= distance[j]):
                    distance[j] = total_distance
                    interference[j] = total_interference
                    parent[j] = current_index

    current = end_index
    result = []
    while current != -1:
        result.append(graph[current].name)
        current = parent[current]

    result.reverse()
    return result
print("Sample Output for test case 1:\n Input: ",end=" ")
print("""graph ={
  'Cave_A': {'Cave_B': 3, 'Cave_C': 5},
  'Cave_B': {'Cave_D': 7, 'Cave_E': 1},
  'Cave_C': {'Cave_D': 3},
  'Cave_D': {'Cave_E': 5},
  'Cave_E': {}
  }""")
print("start_cave = 'Cave_A'")
print("end_cave   = 'Cave_E'")
graph_data={
  'Cave_A': {'Cave_B': 3, 'Cave_C': 5},
  'Cave_B': {'Cave_D': 7, 'Cave_E': 1},
  'Cave_C': {'Cave_D': 3},
  'Cave_D': {'Cave_E': 5},
  'Cave_E': {}
  }
start_cave = 'Cave_A'
end_cave   = 'Cave_E'
num_caves = len(graph_data)
graph = [Cave(name, 0) for name in graph_data.keys()]
weights = [[-1] * num_caves for _ in range(num_caves)]

for i, (cave, connections) in enumerate(graph_data.items()):
    for neighbor, weight in connections.items():
        j = list(graph_data.keys()).index(neighbor)
        weights[i][j] = int(weight)
result = treasure_hunt(graph, weights, num_caves, start_cave, end_cave)
print("\nOutput: ",end=" ")
print(result)
print("\nEnter user input\n")
print("graph = ",end=" ")
graph_data = eval(input())

num_caves = len(graph_data)
graph = [Cave(name, 0) for name in graph_data.keys()]
weights = [[-1] * num_caves for _ in range(num_caves)]

for i, (cave, connections) in enumerate(graph_data.items()):
    for neighbor, weight in connections.items():
        j = list(graph_data.keys()).index(neighbor)
        weights[i][j] = int(weight)

print("start_cave",end=" ")
start_cave = input()
print("end_cave",end=" ")
end_cave = input()

result = treasure_hunt(graph, weights, num_caves, start_cave, end_cave)
print(result)
