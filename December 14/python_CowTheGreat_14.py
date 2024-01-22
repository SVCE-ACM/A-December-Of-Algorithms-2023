class TreeNode:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def find_target_node(root, target):
    if root is None:
        return None

    if root.value == target:
        return root

    left_result = find_target_node(root.left, target)
    right_result = find_target_node(root.right, target)

    return left_result or right_result

def KDistanceNodes(root, target, K):
    def dfs(node, distance):
        if not node:
            return

        if distance == K:
            result.append(node.value)

        dfs(node.left, distance + 1)
        dfs(node.right, distance + 1)

    target_node = find_target_node(root, target)

    if not target_node:
        return []

    result = []
    dfs(target_node, 0)

    return sorted(result)

# Example usage:
# Construct the tree
root = TreeNode(17)
root.left = TreeNode(8)
root.right = TreeNode(27)
root.left.left = TreeNode(4)
root.left.right = TreeNode(14)
root.left.right.left = TreeNode(10)
root.left.right.right = TreeNode(16)

target_node_value = 8
K = 2

output = KDistanceNodes(root, target_node_value, K)
print(output)