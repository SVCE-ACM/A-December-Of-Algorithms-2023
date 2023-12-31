class Node:
    def __init__(self, val):
        self.data = val
        self.next = None


def loopHere(head, tail, position):
    if position == 0:
        return
    walk = head
    for i in range(1, position):
        walk = walk.next
    tail.next = walk


def isLoop(head):
    if not head:
        return False
    fast = head.next
    slow = head
    while fast != slow:
        if not fast or not fast.next:
            return False
        fast = fast.next.next
        slow = slow.next
    return True


def length(head):
    ret = 0
    while head:
        ret += 1
        head = head.next
    return ret


def removeLoop(head):
    myMap = {}
    while head:
        if head in myMap:
            myMap[head].next = None
            break
        myMap[head] = head
        head = head.next


def create_linked_list(values):
    if not values:
        return None
    head = Node(values[0])
    current = head
    for val in values[1:]:
        current.next = Node(val)
        current = current.next
    return head


def print_linked_list(head):
    current = head
    while current:
        print(current.data, end=" ")
        current = current.next
    print()


if __name__ == "__main__":
    elements = [1, 2, 3, 4, 5, 6, 7, 8, 1]
    head = create_linked_list(elements)
    tail = head
    while tail.next:
        tail = tail.next

    loop_position = 3

    removeLoop(head)

    print("Linked List after removing Loop:")
    print_linked_list(head)
