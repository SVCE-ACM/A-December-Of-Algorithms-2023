#include <iostream>
#include <unordered_set>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to detect and remove loops in a linked list
void detectAndRemoveLoop(Node* head) {
    if (!head || !head->next) return;

    std::unordered_set<Node*> visited;
    Node* prev = nullptr;
    Node* current = head;

    while (current) {
        // If current node is already in the set, loop detected, remove the loop
        if (visited.find(current) != visited.end()) {
            prev->next = nullptr; // Breaking the loop
            std::cout << "Loop detected and removed.\n";
            return;
        }

        visited.insert(current);
        prev = current;
        current = current->next;
    }

    std::cout << "No loop detected.\n";
}

// Function to display the linked list
void displayList(Node* head) {
    while (head) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Function to create a linked list with user input values
Node* createLinkedList() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int value;
    char choice;

    do {
        std::cout << "Enter value for the node: ";
        std::cin >> value;

        Node* newNode = new Node(value);

        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        std::cout << "Do you want to add another node? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return head;
}

int main() {
    std::cout << "Create a linked list...\n";
    Node* head = createLinkedList();

    // Creating a loop for demonstration purposes
    if (head) {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        // Creating a loop by connecting the last node to the second node
        temp->next = head->next;
    }

    detectAndRemoveLoop(head);

    std::cout << "Linked list after loop removal: ";
    displayList(head);

    return 0;
}
