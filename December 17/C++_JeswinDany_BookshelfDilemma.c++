#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void removeLoop(struct Node*, struct Node*);

int detectAndRemoveLoop(struct Node* list)
{
	struct Node *slow_p = list, *fast_p = list;

	while (slow_p && fast_p && fast_p->next) {
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;

		if (slow_p == fast_p) {
			removeLoop(slow_p, list);

			return 1;
		}
	}

	return 0;
}

void removeLoop(struct Node* loop_node, struct Node* head)
{
	struct Node* ptr1 = loop_node;
	struct Node* ptr2 = loop_node;

	unsigned int k = 1, i;
	while (ptr1->next != ptr2) {
		ptr1 = ptr1->next;
		k++;
	}

	ptr1 = head;

	ptr2 = head;
	for (i = 0; i < k; i++)
		ptr2 = ptr2->next;

	while (ptr2 != ptr1) {
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}

	while (ptr2->next != ptr1)
		ptr2 = ptr2->next;

	ptr2->next = NULL;
}

void printList(struct Node* node)
{

	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

struct Node* newNode(int key)
{
	struct Node* temp = new Node();
	temp->data = key;
	temp->next = NULL;
	return temp;
}

int main()
{
	struct Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);

	head->next->next->next->next->next = head->next;

	detectAndRemoveLoop(head);

	printList(head);
	return 0;
}