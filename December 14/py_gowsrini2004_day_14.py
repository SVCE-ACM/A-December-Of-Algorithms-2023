print("py_gowsrini2004_day_14\n")
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def distanceK(root, target, k):
    graph = {}

    def buildGraph(node, parent=None):
        if node:
            if parent:
                graph[node.val] = [parent.val]
                graph[parent.val].append(node.val)
            else:
                graph[node.val] = []

            buildGraph(node.left, node)
            buildGraph(node.right, node)

    buildGraph(root)

    result = []
    visited = set()

    def bfs(start, distance):
        queue = [(start, 0)]

        while queue:
            node, dist = queue.pop(0)

            if node in visited:
                continue

            visited.add(node)

            if dist == k:
                result.append(node)

            for neighbor in graph[node]:
                if neighbor not in visited:
                    queue.append((neighbor, dist + 1))

    bfs(target, 0)

    return result

root = TreeNode(17)
root.left = TreeNode(8)
root.right = TreeNode(27)
root.left.left = TreeNode(4)
root.left.right = TreeNode(14)
root.left.right.left = TreeNode(10)
root.left.right.right = TreeNode(16)


target_node = 8
k_distance = 2

result = distanceK(root, target_node, k_distance)
print(sorted(result))