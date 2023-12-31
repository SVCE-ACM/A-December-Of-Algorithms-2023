"""
Module documentation: The Selling Game

This module defines a function to calculate the maximum number of gadgets that can be sold based on certain criteria.

Functions:
    - max_gadgets_sold(x, z, items, clients): Calculates the maximum number of gadgets that can be sold.

Usage:
    - Call max_gadgets_sold(x, z, items, clients) to get the maximum number of gadgets that can be sold.
"""


def max_gadgets_sold(x, z, items, clients):
    """
    Calculates the maximum number of gadgets that can be sold.

    Parameters:
        x (int): Placeholder parameter x.
        z (int): Placeholder parameter z.
        items (list): List of items with specified criteria.
        clients (list): List of clients with specified criteria.

    Returns:
        int: The maximum number of gadgets that can be sold.
    """
    # Sort items and clients in descending order based on their criteria
    sorted_items = sorted(items, key=lambda item: item['m'], reverse=True)
    sorted_clients = sorted(clients, key=lambda client: client['k'], reverse=True)

    gadgets_sold = 0
    assigned_clients = set()

    for item in sorted_items:
        for i, client in enumerate(sorted_clients):
            if i not in assigned_clients and client['k'] < item['m'] and client['r'] >= item['n']:
                gadgets_sold += 1
                assigned_clients.add(i)
                break

    return gadgets_sold


# Example usage:
x, z = 4, 4
items = [
    {'k': 8, 'r': 150, 'm': 10, 'n': 160},
    {'k': 5, 'r': 180, 'm': 12, 'n': 200},
    {'k': 20, 'r': 250, 'm': 15, 'n': 300},
    {'k': 15, 'r': 300, 'm': 18, 'n': 250}
]
clients = [
    {'k': 6, 'r': 200},
    {'k': 14, 'r': 280},
    {'k': 8, 'r': 220},
    {'k': 25, 'r': 350}
]

output = max_gadgets_sold(x, z, items, clients)

print("Output:", output)
