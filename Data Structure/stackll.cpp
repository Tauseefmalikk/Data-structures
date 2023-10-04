#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;


};
 struct node *top=NULL;
void linkedlisttraversal(struct node * ptr)
{
    while(ptr != NULL)
    {
       printf("elements:%d\n",ptr->data);
       ptr=ptr->next;
    }
}

int isempty(struct node* top)
{
    if(top==NULL)
    {
    return 1;
    }
    else{
        return 0;
    }
}

struct node * push(struct node * top,int x)
{
    struct node * n=(struct node*)malloc(sizeof(struct node));
    n->data=x;
    n->next=top;
    top=n;
    return top;
}
int pop(struct node *tp)
{
    if(isempty(tp))
    {
     printf("stack overflow");
    }
    else
    {
        struct node* n=tp;
        top=(tp)->next;
        int x=n->data;
        free (n);        
        return x;
    }
}

int main()

{
   
    top=push(top,66);
      top=push(top,44);
        top=push(top,6);
    linkedlisttraversal(top);
        printf("popped element:%d\n",pop(top));
        printf("popped element:%d\n",pop(top));
        printf("popped element:%d\n",pop(top));
        printf("popped element:%d\n",pop(top));
        linkedlisttraversal(top);


}