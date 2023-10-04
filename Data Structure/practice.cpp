#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

void Linkedlisttraversal(struct node *ptr)
{
    while (ptr !=NULL)
    {
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *insertatfirst(struct node* head,int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=head;
    newnode->data=data;\
    return newnode;
}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));


    head->data=7;
    head->next=second;

    second->data=88;
    second->next=third;

    third->data=12;
    third->next=NULL;


    Linkedlisttraversal(head);
    head=insertatfirst(head,2);
    Linkedlisttraversal(head);


}