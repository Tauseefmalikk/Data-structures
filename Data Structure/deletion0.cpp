//delete at first
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Elements:%d\n",ptr->data);
        ptr=ptr->next;    
    }
}
struct node* deletefirst(struct node * head)
{
    struct node *p=head;
    head=head->next;
    free(p);
    return head;
}
int main()

{
    struct node *head=(struct node*)malloc(sizeof(struct node));
      struct node *second=(struct node*)malloc(sizeof(struct node));
        struct node *third=(struct node*)malloc(sizeof(struct node));
          struct node *fourth=(struct node*)malloc(sizeof(struct node));
            struct node *fifth=(struct node*)malloc(sizeof(struct node));


head->data=12;
head->next=second;

second->data=33;
second->next=third;

third->data=4;
third->next=fourth;

fourth->data=88;
fourth->next=fifth;

fifth->data=7;
fifth->next=NULL;


printf("linked list before deletion:\n");
linkedlisttraversal(head);

head=deletefirst(head);
printf("linked list after traversal:\n");
linkedlisttraversal(head);



}
