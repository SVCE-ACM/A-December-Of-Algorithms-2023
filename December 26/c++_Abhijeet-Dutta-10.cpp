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


bool detectLoop(Node* head){
    Node* slow = head, *fast = head;
        
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}


int main(){
    int n, num;
    cin>>n;
    vector<int> v;
    Node *head, *tail;
    cin>> num;
    head = tail = new Node(num);
    v.push_back(num);
    for(int i=0 ; i<n-1 ; i++){
        cin >> num;
        auto it = std::find(v.begin(), v.end(), num);
        if (it != v.end()) {
            Node* walk = head;
        for(int i=0; i<std::distance(v.begin(), it); i++)
            walk = walk->next;
        tail->next = walk;    
        } else {
            tail->next = new Node(num);
            tail = tail->next;
            v.push_back(num);
        }
    }

    if(detectLoop(head)) cout<< "Cycle Found";
    else cout<< "No Cycle Found";
	return 0;
}
