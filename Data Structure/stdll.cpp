#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

struct student{
   int rollno;
   char name[10];
   char phone[10];
   struct student*nextnode;

};

struct student *insert(struct student *head,int rollno,char name[10],char phone[10])
{
    struct student *s=(struct student*)malloc(sizeof(struct student));
    s->rollno=rollno;
    s->name=name[10];
    s->phone=phone[10];
    s->nextnode=NULL;

    if(head==NULL)
    {
        head=s;
    }
    else{
    
        s->nextnode=head;
        head=s;
    
    }
    return head;

}
void display(struct student * head)
{

struct student * temp=head;
while(temp!=NULL)
{
    printf("Rollno.:%d\n",temp->rollno);
     printf("name:%c\n",temp->name);
      printf("phone:%c\n",temp->phone);
      temp=temp->nextnode;



}

}


int main()
{
    struct student *head=NULL;
    int choice,rollno;
    char name[10];
    char phone[10];

    printf("1 to insert,2 to display");


    do{
     printf("\nenter choice");
     scanf("%d",&choice);
     switch (choice)
     {
     case 1:
        printf("enter roll no\n");
        scanf("%d",&rollno);

         printf("enter name\n");
        scanf("%c",&name);

         printf("enter phone\n");
        scanf("%c",&phone);
    head=insert(head,rollno,name,phone);
        break;
     
     case 2:

        display(head);
        break;
     }
    
    
    }while (choice!=0);
    {
        /* code */
    }
    




}