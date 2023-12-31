#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to detect a cycle in a linked list
bool hasCycle(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        if (slow == fast) {
            return true; // Cycle detected
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return false; // No cycle found
}

// Function to create a new node in the linked list
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to add a new node to the linked list
void addNode(Node* &head, int data) {
    if (head == nullptr) {
        head = createNode(data);
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = createNode(data);
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; ++i) {
        int data;
        cin >> data;
        addNode(head, data);
    }

    // Creating a cycle for demonstration purposes (comment out for a non-cyclic list)
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head; // Creating a cycle

    cout << "Linked list: ";
    displayList(head);

    if (hasCycle(head)) {
        cout << "The linked list contains a cycle." << endl;
    } else {
        cout << "The linked list does not contain a cycle." << endl;
    }

    return 0;
}
