//inserting a node at first
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;  
};

void linkedListTraversal(struct node* ptr)
{
    while (ptr !=NULL)
    {
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *insertatfirst(struct node *head,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));  //dynamic/heap memory allocation
    newnode->next=head;
    newnode->data=data;
    return newnode;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    

    head=(struct node*)malloc(sizeof(struct node)); // heap/dynamic memory allocation
      second=(struct node*)malloc(sizeof(struct node));
        third=(struct node*)malloc(sizeof(struct node));
          


head->data=7;
head->next=second;

second->data=8;
second->next=third;

third->data=20;
third->next=NULL;



linkedListTraversal(head);
head=insertatfirst(head,56);
linkedListTraversal(head);
return 0;
}