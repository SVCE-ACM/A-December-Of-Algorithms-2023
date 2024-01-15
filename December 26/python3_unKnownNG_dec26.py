class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def searchForCycle(head):
    if not head or not head.next :
        return False
    
    iP = head
    jP = head.next

    while jP and jP.next:
        if iP == jP:
            return True

        iP = iP.next
        jP = jP.next.next

    return False

linkedList = Node(1)
linkedList.next = Node(2)
linkedList.next.next = Node(3)
linkedList.next.next.next = Node(4)
linkedList.next.next.next.next = Node(5)

# linkedList.next.next.next.next.next = linkedList

if searchForCycle(linkedList):
    print("Cycle Found")
else:
    print("No Cycle Found")