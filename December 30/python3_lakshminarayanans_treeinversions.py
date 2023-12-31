"""
Module documentation: Tree Inversions

This module provides a solution for processing shortest path queries on a tree and calculating inversion counts.

Functions:
    - shortest_path(n, tree, start, end): Finds the shortest path between two nodes in a tree.
    - merge(left, mid, right, arr): Merges two sorted halves of an array during merge sort and counts inversions.
    - merge_sort(left, right, arr): Implements the merge sort algorithm to count inversions.
    - main(): Reads input from the user and performs shortest path queries with inversion counts.

Usage:
    - Call shortest_path(n, tree, start, end) to find the shortest path between two nodes in a tree.
    - Call merge_sort(left, right, arr) to perform merge sort on a specified portion of an array and count inversions.
    - Call main() to run the program and input the number of test cases, tree information, and queries.

"""

from io import StringIO
import sys

inversions = 0  # Global variable to store inversion counts


def shortest_path(n, tree, start, end):
    """
    Finds the shortest path between two nodes in a tree.

    Parameters:
        n (int): The number of nodes in the tree.
        tree (dict): The tree represented as an adjacency list.
        start (int): The starting node.
        end (int): The ending node.

    Returns:
        list: The shortest path as a list of nodes.
    """
    distance = [-1] * (n + 1)
    parent = [-1] * (n + 1)

    queue = [start]
    distance[start] = 0

    while queue:
        current = queue.pop(0)

        for neighbor in tree[current]:
            if distance[neighbor] == -1:
                distance[neighbor] = distance[current] + 1
                parent[neighbor] = current
                queue.append(neighbor)

    path = []
    current = end

    while current != start:
        path.append(current)
        current = parent[current]

    path.append(start)
    path.reverse()

    return path


def merge(left, mid, right, arr):
    """
    Merges two sorted halves of an array during merge sort and counts inversions.

    Parameters:
        left (int): The left index of the array.
        mid (int): The middle index of the array.
        right (int): The right index of the array.
        arr (list): The array to be merged and sorted.
    """
    i, j, n = left, mid + 1, right - left + 1
    merged = []

    while i <= mid and j <= right:
        if arr[i] <= arr[j]:
            merged.append(arr[i])
            i += 1
        else:
            merged.append(arr[j])
            global inversions
            inversions += (mid - i + 1)
            j += 1

    while i <= mid:
        merged.append(arr[i])
        i += 1

    while j <= right:
        merged.append(arr[j])
        j += 1

    for p in range(n):
        arr[left + p] = merged[p]


def merge_sort(left, right, arr):
    """
    Implements the merge sort algorithm to count inversions.

    Parameters:
        left (int): The left index of the array.
        right (int): The right index of the array.
        arr (list): The array to be sorted.
    """
    if left >= right:
        return
    mid = (left + right) // 2
    merge_sort(left, mid, arr)
    merge_sort(mid + 1, right, arr)
    merge(left, mid, right, arr)


def main():
    """
    Reads input from the user and performs shortest path queries with inversion counts.
    """
    t = int(input())
    for _ in range(t):
        n, q = map(int, input().split())
        color = [0] + list(map(int, input().split()))

        tree = {i: [] for i in range(1, n + 1)}
        for _ in range(n - 1):
            x, y = map(int, input().split())
            tree[x].append(y)
            tree[y].append(x)

        for _ in range(q):
            x, y = map(int, input().split())
            path = shortest_path(n, tree, x, y)
            query_path = [color[node] for node in path]

            query_path_reverse = query_path[::-1]

            global inversions
            inversions = 0
            merge_sort(0, len(path) - 1, query_path)
            f = inversions

            inversions = 0
            merge_sort(0, len(path) - 1, query_path_reverse)
            f += inversions

            print(f)


if __name__ == "__main__":
    input_str = "1\n8 7\n1 2 3 1 2 1 3 1\n1 2\n1 3\n2 4\n3 5\n3 6\n5 7\n6 8\n4 6\n7 8\n5 4\n7 6\n3 8\n1 2\n4 8\n"
    sys.stdin = StringIO(input_str)
    main()
