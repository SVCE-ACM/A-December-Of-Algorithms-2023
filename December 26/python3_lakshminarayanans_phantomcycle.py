"""
Module documentation: Phantom Cycle

This module defines a ListNode class and two functions to create a linked list and check for the presence of a cycle.

Classes:
    - ListNode: Represents a node in a linked list.

Functions:
    - create_linked_list(): Creates a linked list from user-input space-separated values.
    - has_cycle(head): Checks if a linked list has a cycle.

Usage:
    - Call create_linked_list() to create a linked list.
    - Call has_cycle(head) to check if the linked list has a cycle.
"""

class ListNode:
    """
    Represents a node in a linked list.

    Attributes:
        value: The value of the node.
        next: Reference to the next node in the linked list.
    """

    def __init__(self, value):
        self.value = value
        self.next = None


def create_linked_list():
    """
    Creates a linked list from user-input space-separated values.

    Returns:
        ListNode: The head of the linked list.
    """
    values = input("Enter space-separated values for the linked list: ").split()
    if not values:
        return None

    head = ListNode(int(values[0]))
    current = head

    for value in values[1:]:
        current.next = ListNode(int(value))
        current = current.next
    return head


def has_cycle(head):
    """
    Checks if a linked list has a cycle.

    Parameters:
        head (ListNode): The head of the linked list.

    Returns:
        bool: True if a cycle is found, False otherwise.
    """
    if not head or not head.next:
        return False

    slow = head
    fast = head.next

    while slow and slow.next.next:
        while fast:
            if slow.value == fast.value:
                return True
            fast = fast.next
        fast = slow.next.next
        slow = slow.next

    return False  # No cycle found


# Example usage:
head = create_linked_list()
print("Linked List 1:")
current = head
while current:
    print(current.value, end=" -> ")
    current = current.next
print("None")

output = has_cycle(head)
print("Output:", "Cycle Found" if output else "No Cycle Found")
