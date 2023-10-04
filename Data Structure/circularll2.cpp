#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node * next;

};

void linkedlisttraveral(struct node *head)
{
    struct node *p=head;
    do{
        printf("elements:%d\n",p->data);
        p=p->next;
    
    }while(p!=head);


}

struct node *insertinbetween(struct node*head,int index,int data)
{
struct node* newnode=(struct node*)malloc(sizeof(struct node));
int i=0;
struct node*p=head;
while(i!=index-1)
{
p=p->next;
i++;
}
newnode->data=data;
newnode->next=p->next;
p->next=newnode;
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
      linkedlisttraveral(head);

      head= insertinbetween(head,1,69);
      printf("after insertion\n");
       linkedlisttraveral(head);


}