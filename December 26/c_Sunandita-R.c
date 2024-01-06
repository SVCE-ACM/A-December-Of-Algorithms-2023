/*
    INPUT FORMAT :

    A single string representing the Linked List without spaces.

    Example: 1->2->3->4->5->1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node* insert(struct Node* head, struct Node* node);
struct Node* newNode(int data);
void insertNode(struct Node** head, int data);
void parseAndCreateList(struct Node** head, const char* input);

struct Node {
    int data;
    struct Node* next;
};

int contains(struct Node* head, struct Node* target) {
    while (head != NULL) {
        if (head->data == target->data) {
            return 1;
        }
        head = head->next;
    }
    return 0;
}

int hasCycle(struct Node* head) {
    struct Node* current = head;
    struct Node* visitedNodes = NULL;

    while (current != NULL) {
        if (contains(visitedNodes, current)) {
            return 1;
        }
        visitedNodes = insert(visitedNodes, current);
        current = current->next;
    }

    return 0;
}

struct Node* insert(struct Node* head, struct Node* node) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = node->data;
    newNode->next = head;
    return newNode;
}

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void parseAndCreateList(struct Node** head, const char* input) {
    const char* delimiter = "->";
    char* strCopy = strdup(input);
    char* token = strtok(strCopy, delimiter);
    
    while (token != NULL) {
        int data = atoi(token);
        insertNode(head, data);
        token = strtok(NULL, delimiter);
    }

    free(strCopy);
}

int main() {
    struct Node* head = NULL;
    char input[100];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    parseAndCreateList(&head, input);

    if (hasCycle(head)) {
        printf("Cycle Found\n");
    } else {
        printf("No Cycle Found\n");
    }

    return 0;
}
