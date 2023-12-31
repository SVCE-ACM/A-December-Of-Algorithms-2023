"""
Module Documentation: It's Chirstmas Season

This module defines functions for counting subtrees with a given property in a tree.

Functions:
    - dfs(src, par, edges, arr): Performs depth-first search to calculate the subtree sums.
    - nCr(n, r): Calculates the binomial coefficient "n choose r" using logarithmic formula.
    - main(): Main function to handle input, perform calculations, and print results.

Usage:
    - Run the main function to execute the counting subtrees algorithm.
    - Input is taken from standard input.
    - Results are printed to standard output.

"""

from math import log, exp


def dfs(src, par, edges, arr):
    """
    Performs depth-first search to calculate the subtree sums.

    Parameters:
        src (int): Current source node.
        par (int): Parent node of the current source node.
        edges (list[list[int]]): List representing the edges in the tree.
        arr (list[int]): List representing the subtree sums.

    Returns:
        None
    """
    for ch in edges[src]:
        if ch == par:
            continue
        dfs(ch, src, edges, arr)
        arr[src] += arr[ch]


def nCr(n, r):
    """
    Calculates the binomial coefficient "n choose r" using logarithmic formula.

    Parameters:
        n (int): Total number of elements.
        r (int): Number of elements to choose.

    Returns:
        int: The binomial coefficient value.
    """
    if r > n:
        return 0

    if r == 0 or n == r:
        return 1

    res = 0
    for i in range(r):
        res += log(n - i) - log(i + 1)
    return round(exp(res))


def main():
    """
    Main function to handle input, perform calculations, and print results.

    Returns:
        None
    """
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        arr = [0] + list(map(int, input().split()))
        edges = [[] for _ in range(n + 1)]

        for _ in range(n - 1):
            u, v = map(int, input().split())
            edges[u].append(v)
            edges[v].append(u)

        dfs(1, -1, edges, arr)

        if arr[1] % x != 0:
            print(" ".join(["0"] * n))
            continue

        ct = sum(1 for i in range(2, n + 1) if arr[i] % x == 0)

        result = " ".join(str(nCr(ct, i - 1)) for i in range(1, n + 1))
        print(result)


if __name__ == "__main__":
    main()
