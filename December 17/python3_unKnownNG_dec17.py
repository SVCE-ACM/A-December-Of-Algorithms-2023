class linkedListNode:
    def __init__(self, data) :
        self.data = data
        self.next = None

class linkedList:
    def __init__(self):
        self.head = None
    
    def detectAndRemoveLoop(self):
        if self.head == None:
            return
        if self.head.next == None:
            return
        slowPointer = self.head
        fastPointer = self.head
        while slowPointer and fastPointer and fastPointer.next:
            slowPointer = slowPointer.next
            fastPointer = fastPointer.next.next
            if slowPointer == fastPointer:
                slowPointer = self.head
                while slowPointer.next != fastPointer.next:
                    slowPointer = slowPointer.next
                    fastPointer = fastPointer.next
                fastPointer.next = None

    def insertNode(self, data):
        newNode = linkedListNode(data)
        newNode.next = self.head
        self.head = newNode
    
    def printLinkedList(self):
        var = self.head
        while var:
            print(var.data, sep = "->")
            var = var.next

linkedListObject = linkedList()
linkedListObject.head = linkedListNode(1)
linkedListObject.head.next = linkedListNode(2)
linkedListObject.head.next.next = linkedListNode(3)
linkedListObject.head.next.next.next = linkedListNode(4)
linkedListObject.head.next.next.next = linkedListNode(6)
linkedListObject.head.next.next.next.next = linkedListObject.head.next.next

linkedListObject.head.next.next.next.next = linkedListNode(5)

linkedListObject.head.next.next.next.next.next = linkedListObject.head.next.next
 
linkedListObject.detectAndRemoveLoop()
 
print("Linked List after removing loop")
linkedListObject.printLinkedList()