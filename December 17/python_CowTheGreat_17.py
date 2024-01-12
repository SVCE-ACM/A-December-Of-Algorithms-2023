class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

def detect_and_remove_loop(head):
    slow = fast = head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

        if slow == fast:
            break

    if not fast or not fast.next:
        return

    slow = head

    while slow != fast:
        slow = slow.next
        fast = fast.next

    while fast.next != slow:
        fast = fast.next

    fast.next = None

def print_list(head):
    current = head
    print(current.value,end=" ")
    while current.next:

        current = current.next
        print(" --> ",end=" ")
        print(current.value, end=" ")



node1 = Node(1)
node2 = Node(2)
node3 = Node(3)
node4 = Node(4)
node5 = Node(5)
node6 = Node(6)
node7 = Node(7)
node8 = Node(8)
node1.next = node2
node2.next = node3
node4.next = node5
node3.next=node8
node8.next=node7
node3.next = node4
node7.next=node6
node6.next=node1
detect_and_remove_loop(node1)
print_list(node1)