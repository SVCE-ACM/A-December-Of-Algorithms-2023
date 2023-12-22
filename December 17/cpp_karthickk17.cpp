void detectAndRemoveLoop(Node* head)
{
    
    Node *fast, *slow;
    fast = slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow-> next;
        if(slow == fast) 
            break;
    }
    if(slow != fast) {
        cout<<"No Loop detected!" << endl;
        return;
    }
    slow = head;
    if (slow == fast)
        while (fast->next != slow)
            fast = fast->next;
    else {
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    fast->next = NULL;
    return;
}

