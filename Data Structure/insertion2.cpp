//insertion at the end.
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversl(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node insertionatend(struct node *head,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    newnode->data=data;
    p->next=newnode;
    newnode->next=NULL;

}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
     struct node *first=(struct node*)malloc(sizeof(struct node));
      struct node *second=(struct node*)malloc(sizeof(struct node));
      struct node *third=(struct node*)malloc(sizeof(struct node));
       struct node *fourth=(struct node*)malloc(sizeof(struct node));


head->data=44;
head->next=first;

first->data=5;
first->next=second;

second->data=8;
second->next=third;

third->data=12;
third->next=fourth;

fourth->data=45;
fourth->next=NULL;

printf("linked list before insertion\n");
linkedlisttraversl(head);
insertionatend(head,69);
printf("linked list after insertion\n"); 
linkedlisttraversl(head);

}