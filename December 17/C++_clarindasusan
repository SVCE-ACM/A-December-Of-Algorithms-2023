#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

void removeLoop(Node* head){
    Node* slow = head; 
    Node* fast = head;
        
    while(slow->next && fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }
    if( slow != fast || slow == NULL || fast == NULL) return;
    
    slow = head;
    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    Node* p = slow->next;
    while(p->next != slow)
        p = p->next;
    p->next = NULL;
}

int main()
{
    unordered_map<Node *, int>myMap;
        
    int n, num;
    cin>>n;
        
    Node *head, *tail;
    cin>> num;
    head = tail = new Node(num);
        
    myMap[head]=num;
        
    for(int i=0 ; i<n-1 ; i++){
        cin>> num;
        tail->next = new Node(num);
        tail = tail->next;
        myMap[tail]=num;
    }
        
    int pos;
    cin>> pos;
    loopHere(head,tail,pos);
        
    if( isLoop(head)) removeLoop(head);
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
	return 0;
}
