#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node * next;

};

void linkedlisttraversal (struct node *head){
    struct node*p=head;

        do{
            printf("elements:%d\n",p->data);
            p=p->next;
        
        }while(p!=head);



}
struct node * insertatfirst(struct node *head,int data)
{
    struct node * newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    struct node*p=head->next;
    while(p->next!=head)
    {
      p=p->next;
    
    }
    p->next=newnode;
    newnode->next=head;
    head=newnode;
    return head;


}


int main()

{


      struct node *head=(struct node*)malloc(sizeof(struct node));
      struct node *first=(struct node*)malloc(sizeof(struct node));
      struct node *second=(struct node*)malloc(sizeof(struct node));


      head->data=12;
      head->next=first;

      first->data=11;
      first->next=second;

      second->data=88;
      second->next=head;

      printf("before insertion\n");
      linkedlisttraversal(head);

      head=insertatfirst(head,69);
      printf("after insertion\n");
      linkedlisttraversal(head);



}


