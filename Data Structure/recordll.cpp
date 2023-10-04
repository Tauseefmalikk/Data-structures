//student record using linked list

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int rollno;
    char name[10];
    int marks;
    struct node* next;
};

struct student *insert(struct student *head,int rollno,char name[10],int marks)
{
    struct student * std=(struct student*)malloc(sizeof(struct student));
    std->rollno=rollno;
    strcpy(std->name,name);
    std->marks=marks;
    std->next=NULL;

    if(head=NULL)
    {
        head=std;
    }
    else{
        std->next=head;
        head=std;
    }
    return head;




}