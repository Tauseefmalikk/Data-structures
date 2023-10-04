//deletion at end
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}  

struct node *deleteatend(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
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

    printf("linked list before deletion:\n");
    linkedlisttraversal(head);

    head=deleteatend(head);

    printf("linked list after deletiont:\n");
    linkedlisttraversal(head);


}