//write a program in c to create and display singly linked list by taking input from user

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*firstnode;

void createlist(int n);
void displaylist();

int main()
{
    int n;

    printf("input the number of nodes:\n");
    scanf("%d",&n);

    createlist(n);
    printf("The data entered in the list:");
    displaylist();
    return 0;


}
void createlist(int n)
{
    struct node *forNnodes,*temp;

    int data,i;
    //creating head node

    firstnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data for first node:\n");
    scanf("%d",&data);

    firstnode->data=data;
    firstnode->next=NULL;
    temp=firstnode;


    //creating n nodes
    for(i=2;i<=n;i++)
    {
        forNnodes=(struct node*)malloc(sizeof(struct node));
        if(forNnodes==NULL)
        {
            printf("no memory allocated");
            break;
        }
        else
        {

        printf("enter data for node %d:\n",i);
        scanf("%d",&data);

        forNnodes->data=data;
        forNnodes->next=NULL;

        temp->next=forNnodes; //formed link between prev node and new
        temp=temp->next; 
        
        }
    }
}

void displaylist()
{
    struct node *temp;

    temp=firstnode;

    while(temp!=NULL)
    {
        printf("Data:%d\n",temp->data);
        temp=temp->next;
    }


}