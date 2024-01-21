#include<stdio.h>
#include<stdlib.h>

printf("c_gowsrini2004_day_17\n")
struct node{
   int data;
   struct node *next;
};

void removeLoop(struct node* head){

   int flag =0;

   //ptr1 and ptr2 initialized
   struct node *ptr1 = head;
   struct node *ptr2 = head;

   
   while(ptr2!=NULL && ptr2->next!=NULL){
       ptr1 = ptr1->next;
       ptr2 = ptr2->next->next;

       if(ptr1==ptr2){
           //When a loop is present
           flag=1;
           break;
       }
   }
   
   
   if(flag == 1){
       ptr1 = head;

       
       while(ptr1->next != ptr2->next){
           ptr1 = ptr1->next;
           ptr2 = ptr2->next;
       }

       
       ptr2->next = NULL;
   }
}



int main(){

   struct node *head = (struct node*)malloc(sizeof(struct node));
   struct node *one = (struct node*)malloc(sizeof(struct node));
   struct node *two = (struct node*)malloc(sizeof(struct node));
   struct node *three = (struct node*)malloc(sizeof(struct node));
   struct node *four = (struct node*)malloc(sizeof(struct node));
   struct node *five = (struct node*)malloc(sizeof(struct node));

   head-> data = 3;
   head-> next = one;

   one-> data = 4;
   one-> next = two;

   two-> data = 5;
   two-> next = three;

   three-> data = 3;
   three-> next = four;

   four-> data = 3;
   four-> next = five;
   
   five-> data = 2;
   five-> next = four;   
   
   
  

   removeLoop(head);

  
   while(head!= NULL){
       printf("%d -> ",head->data);
       head = head->next;
   }
   printf("NULL");
   return 0;
}