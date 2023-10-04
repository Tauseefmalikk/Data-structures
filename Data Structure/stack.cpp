#include<stdio.h>
#include<stdlib.h>

struct stack
{
      int size;
      int top;
      int * arr;

};

int isempty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}
int isfull(struct stack * ptr)
{
    if(ptr->top==ptr->size-1)
    {
    return 1;
    }
    else
    {
    return 0;
    
    }


}
void push(struct stack *ptr,int val)
{
    if(isfull(ptr))
    {
     printf("stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }

}
int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
    printf("stack underflow\n");
    return -1;
    }
    else
    {
     int val = ptr->arr[ptr->top];
     ptr->top--;
     return val;

    }

}



int main()

{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
      
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    printf("stack has been created successfully\n");


    printf("%d\n",isempty(sp));
    printf("%d\n",isfull(sp));

    push(sp,22);
      push(sp,2);
        push(sp,11);
    printf("popped %d\n",pop(sp));
     printf("popped %d\n",pop(sp));

    
    printf("%d\n",isempty(sp));
    printf("%d\n",isfull(sp));



}