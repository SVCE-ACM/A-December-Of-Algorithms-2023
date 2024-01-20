"""
Module Documentation: Call of Justice

This module defines a binary tree structure and a solution class to find k-distance nodes from a given target node.

Classes:
    - TreeNode: Represents a node in a binary tree.
    - Solution: Provides a solution to find k-distance nodes in a binary tree.

Functions:
    - build_tree(s): Builds a binary tree from the given string representation.
    - k_distance_nodes(root, target, k): Finds k-distance nodes from a target node in a binary tree.

Usage:
    - Create an instance of Solution.
    - Parse the input and build the binary tree using build_tree.
    - Call the k_distance_nodes method with the root of the tree, target node value, and k-distance.
    - Print the result.

"""

from collections import deque


class TreeNode:
    def __init__(self, value):
        """
        Represents a node in a binary tree.

        Parameters:
            value (int): The value of the node.
        """
        self.data = value
        self.left = None
        self.right = None


def build_tree(s):
    """
    Builds a binary tree from the given string representation.

    Parameters:
        s (str): The string representation of the binary tree.

    Returns:
        TreeNode: The root of the built binary tree.
    """
    if len(s) == 0 or s[0] == 'N':
        return None

    ip = s.split()
    root = TreeNode(int(ip[0]))
    queue = deque([root])
    i = 1

    while queue and i < len(ip):
        curr_node = queue.popleft()

        curr_val = ip[i]
        if curr_val != "N":
            curr_node.left = TreeNode(int(curr_val))
            queue.append(curr_node.left)

        i += 1
        if i >= len(ip):
            break

        curr_val = ip[i]
        if curr_val != "N":
            curr_node.right = TreeNode(int(curr_val))
            queue.append(curr_node.right)

        i += 1

    return root


class Solution:
    def __init__(self):
        """
        Provides a solution to find k-distance nodes in a binary tree.
        """
        self.nodes = []

    def k_distance_nodes_down(self, root, k):
        """
        Helper function to find k-distance nodes down the tree from a given node.

        Parameters:
            root (TreeNode): The current node in the tree.
            k (int): The distance from the original target node.

        Returns:
            None
        """
        if root is None:
            return
        if k == 0:
            self.nodes.append(root.data)
            return
        self.k_distance_nodes_down(root.left, k - 1)
        self.k_distance_nodes_down(root.right, k - 1)

    def helper(self, root, target, k):
        """
        Recursive helper function to find k-distance nodes.

        Parameters:
            root (TreeNode): The current node in the tree.
            target (int): The value of the target node.
            k (int): The distance from the target node.

        Returns:
            int: The distance from the target node to the current node.
        """
        if root is None:
            return -1
        if root.data == target:
            self.k_distance_nodes_down(root, k)
            return 0
        dl = self.helper(root.left, target, k)
        if dl != -1:
            if dl + 1 == k:
                self.nodes.append(root.data)
            else:
                self.k_distance_nodes_down(root.right, k - dl - 2)
            return 1 + dl
        dr = self.helper(root.right, target, k)
        if dr != -1:
            if dr + 1 == k:
                self.nodes.append(root.data)
            else:
                self.k_distance_nodes_down(root.left, k - dr - 2)
            return 1 + dr
        return -1

    def k_distance_nodes(self, root, target, k):
        """
        Finds k-distance nodes from a target node in a binary tree.

        Parameters:
            root (TreeNode): The root of the binary tree.
            target (int): The value of the target node.
            k (int): The distance from the target node.

        Returns:
            list: A list of k-distance nodes sorted in ascending order.
        """
        self.nodes.clear()
        self.helper(root, target, k)
        self.nodes.sort()
        return self.nodes


# Example usage
if __name__ == "__main__":
    t = int(input())
    x = Solution()

    for _ in range(t):
        s = input()
        head = build_tree(s)

        target, k = map(int, input().split())

        res = x.k_distance_nodes(head, target, k)

        print(*res)
