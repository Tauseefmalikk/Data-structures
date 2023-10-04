//insertion after a node
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
void linkedlisttraversal(struct node *ptr)

{
    while (ptr!=NULL)
    {
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
    

}
struct node *insertafteranode(struct node *head,struct node *prevnode,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=prevnode->next;
    prevnode->next=newnode;
}

int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));

    head->data=88;
    head->next=second;

    second->data=12;
    second->next=third;

    third->data=45;
    third->next=fourth;

    fourth->data=12;
    fourth->next=NULL;

    printf("linked list before traversal:\n");
    linkedlisttraversal(head);

    insertafteranode(head,second,100);

    printf("linked list after traversal\n:");

    linkedlisttraversal(head);
    return 0;
    


}