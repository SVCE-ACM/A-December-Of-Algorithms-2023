#include<iostream>
#include<map>
using namespace std;

struct node
{
    int val;
    struct node *next;
};
struct node *head = NULL;

bool detectLoop(struct node* head)
{
    struct node* temp = head;
    map<node*,bool> v;
    while(temp!=NULL){
        if(v[temp]!=true){
            v[temp] = true;
            temp = temp->next;
        }
        else{
            return true;
        }
    }
    return false;
}

void insert(int val) 
{
    struct node *nn = new struct node;
    nn->val = val;
    nn->next = NULL;
    if (head == NULL) {
        head = nn;
    } else {
        struct node *t = head;
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = nn;
    }
}

int main() {
    int n, e;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> e;
        insert(e);
    }
    // Adding a Loop
    head->next->next->next->next->next = head;
    if (detectLoop(head)) {
        cout << "Cycle Found";
    } else {
        cout << "No Cycle Found";
    }

    return 0;
}
