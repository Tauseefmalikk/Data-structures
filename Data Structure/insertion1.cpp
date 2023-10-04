//insertion in between 
#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
void Linkedlisttraversal (struct node *ptr)
{
while(ptr!=NULL)
    {
    printf("elements:%d\n",ptr->data);
    ptr=ptr->next;
    }
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
struct node *second=(struct node*)malloc(sizeof(struct node));
struct node *third=(struct node*)malloc(sizeof(struct node));
struct node *fourth=(struct node*)malloc(sizeof(struct node));

head->data=7;
head->next=second;

second->data=9;
second->next=third;

third->data=10;
third->next=fourth;


fourth->data=0;
fourth->next=NULL;

printf("before insertion\n");
Linkedlisttraversal(head);
head=insertinbetween(head,3,45);
printf("after insertion\n");
Linkedlisttraversal(head);

}
