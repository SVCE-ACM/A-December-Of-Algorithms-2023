#include<iosteam>
using namespace std;
struct node
{
    int val;
    struct node *next;
};
struct node *head = NULL;

bool detectLoop(Node* head)
    {
        Node* temp = head;
        map<Node*,bool> v;
        while(temp!=NULL){
            if(v[temp]!=true){
            v[temp] = true;
            temp = temp->next;}
            else{
                return true;
            }
        }
        return false;
}
void insert(struct node *head, int val)
{
    struct node *nn = malloc(sizeof(struct node));
    nn->val=val;
    nn->next=NULL;
    if(head==NULL){
         head=nn;
    }
    else
    {
        struct node *t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=nn;
    }
}

int main(){
  int n,e;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>e;
    insert(head,e);
  }
  if(detectLoop(head)){
    cout << "Cycle Found";
  }
  else{
    cout << "No Cycle Found";
  }
}
