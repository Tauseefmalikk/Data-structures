#include<stdio.h>
#include<stdlib.h>
 
 struct Node{
    int data;
    struct Node *next;
 };
 void linkedListTraversal(struct Node *ptr)  //traversing ll means visiting each node untill end node is reached
 
 {
    while (ptr != NULL)
    {
        printf("elements: %d \n",ptr->data);
        ptr=ptr->next;
    }
    
   

 }
 int main()
 {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head=(struct Node*) malloc(sizeof(struct Node)); //allocate memory for nodes of linked list in Heap
    second=(struct Node*) malloc(sizeof(struct Node));
    third=(struct Node*) malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=17;
    second->next=third;

    third->data=7;
    third->next=fourth;

    fourth->data=99;
    fourth->next=fifth;
    
    fifth->data=18;
    fifth->next=NULL;
    linkedListTraversal(head);
    return 0;
 }