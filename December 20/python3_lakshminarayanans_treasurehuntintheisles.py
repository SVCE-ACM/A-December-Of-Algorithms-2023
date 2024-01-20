"""
Module Documentation: Treasure Hunt In The Isles

This module implements Dijkstra's shortest path algorithm to find the shortest path
from a starting cave to an ending cave in a graph.

Functions:
    - min_dist(distances, spt_set): Helper function to find the node with the minimum distance.
    - dijkstra(graph, distances, prev_node, spt_set): Dijkstra's algorithm for finding the shortest path.
    - print_path(prev_node, end_cave): Helper function to print the path from start to end.

Usage:
    - Define the graph with weights between caves.
    - Specify the starting and ending caves.
    - Run the script to find and print the shortest path.

"""

import sys


def min_dist(distances, spt_set):
    """
    Helper function to find the node with the minimum distance.

    Parameters:
        distances (dict): Dictionary containing distances from the start node.
        spt_set (set): Set containing nodes already processed.

    Returns:
        str: Node with the minimum distance.
    """
    u = None
    min_value = sys.maxsize
    for node, dist in distances.items():
        if dist < min_value and node not in spt_set:
            u = node
            min_value = dist
    return u


def dijkstra(graph, distances, prev_node, spt_set):
    """
    Dijkstra's algorithm for finding the shortest path.

    Parameters:
        graph (dict): Graph representation with weights.
        distances (dict): Dictionary containing distances from the start node.
        prev_node (dict): Dictionary containing the previous node in the shortest path.
        spt_set (set): Set containing nodes already processed.
    """
    n = len(graph)
    for _ in range(n - 1):
        u = min_dist(distances, spt_set)
        spt_set.add(u)
        for neighbor, weight in graph[u].items():
            if neighbor not in spt_set and (distances[u] + weight < distances[neighbor]):
                distances[neighbor] = distances[u] + weight
                prev_node[neighbor] = u


def print_path(prev_node, end_cave):
    """
    Helper function to print the path from start to end.

    Parameters:
        prev_node (dict): Dictionary containing the previous node in the shortest path.
        end_cave (str): Ending node for the path.
    """
    if end_cave is None:
        return
    prev_cave = prev_node[end_cave]
    print_path(prev_node, prev_cave)
    print(end_cave, end=" ")


if __name__ == "__main__":
    # Example usage
    graph = {
        "Cave_A": {"Cave_B": 3, "Cave_C": 7},
        "Cave_B": {"Cave_D": 7, "Cave_E": 1},
        "Cave_C": {"Cave_D": 3},
        "Cave_D": {"Cave_E": 5},
        "Cave_E": {}
    }
    start_cave = "Cave_A"
    end_cave = "Cave_E"
    n = len(graph)

    spt_set = set()
    distances = {node: sys.maxsize for node in graph}
    prev_node = {node: None for node in graph}
    distances[start_cave] = 0
    dijkstra(graph, distances, prev_node, spt_set)

    print_path(prev_node, end_cave)
    print()
