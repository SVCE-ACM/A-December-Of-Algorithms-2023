void detectLoop(Node* head)
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
        cout<<"No Cycle Found" << endl;
        return;
    }
    cout << "Cycle Found" << endl;
}

