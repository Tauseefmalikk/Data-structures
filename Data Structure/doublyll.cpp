#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node *prev;

};


void forwardlinkedlisttraversal(struct node * head)
{
    struct node * p=head;
    do{
        printf("elements:%d\n",p->data);
        p=p->next;
    
    }while(p!=NULL);
}
void backwardlinkedlisttraversal(struct node *head)
{
    struct node  *q=head->next;
    while(q!=NULL)
    {
        q=q->next;
    }
    do
    {
    printf("elements:%d\n",q->data);
    q=q->prev;
    }
    while(q!=NULL);


}
int main()

{
     
      struct node *head=(struct node*)malloc(sizeof(struct node));
      struct node *first=(struct node*)malloc(sizeof(struct node));
      struct node *second=(struct node*)malloc(sizeof(struct node));


      head->data=12;
      head->next=first;
      head->prev=NULL;

      first->data=11;
      first->next=second;
      first->prev=head;

      second->data=88;
      second->next=NULL;
      second->prev=first;



    forwardlinkedlisttraversal(head);
    backwardlinkedlisttraversal(head);

}

