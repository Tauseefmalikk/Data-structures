 //delete by value
 #include<stdio.h>
 #include<stdlib.h>
 struct node{
 int data;
 struct node* next;
 
 };
    void linkedlisttraversal (struct node *ptr)
    {
        while(ptr!=NULL)
        {
            printf("elements:%d\n",ptr->data);
            ptr=ptr->next;
        }

    }

    struct node* deletebyvalue(struct node* head,int value)
    {
        struct node *p=head;
        struct node *q=head->next;
        while(q->data!=value && q->next!=NULL)
        {
            p=p->next;
            q=q->next;
        }
            if(q->data == value)
            {
                p->next = q->next;
                free(q);
            }
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

    third->data=12;
    third->next=fourth;

    fourth->data=1;
    fourth->next=NULL;
 

       printf("linked list before deletion:\n");
    linkedlisttraversal(head);

    head=deletebyvalue(head,12);

    printf("linked list after deletiont:\n");
    linkedlisttraversal(head);
 }