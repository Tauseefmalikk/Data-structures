//deletion at index
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
    struct node *deleteatindex(struct node *head,int index)
    {
        int i=0;
        struct node *p=head;
        while (i!=index-1)
        {
            p=p->next;
            i++;
        }
        struct node *q=p->next;
        p->next=q->next;
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

    head=deleteatindex(head,2);

    printf("linked list after deletiont:\n");
    linkedlisttraversal(head);


}