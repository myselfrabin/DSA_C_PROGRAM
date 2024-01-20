#include<stdio.h>
#include<stdlib.h>
struct stack{
     int size;
     int top;
     int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("There is an stack overflow %d cannot be pushed\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("This is a stack underflow condition");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *sp;
    sp=(int *)malloc(sizeof(struct stack));
    if(sp==NULL)
    {
          printf("Memory not allocated:");
    }
    sp->size=5;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    if(sp->arr==NULL)
    {
        printf("Memory not allocated:");
    }
    printf("Before push,Full:%d\n",isFull(sp));
    printf("Before push,Empty:%d\n",isEmpty(sp));
    push(sp,1);
    push(sp,4);
    push(sp,3);
    push(sp,2);
    push(sp,7); // --->pushed 5 values
    push(sp,10); //Stack underflow since the size of stack is 5
    printf("After push,Full:%d\n",isFull(sp));
    printf("After push,Empty:%d\n",isEmpty(sp));
    
                 printf("The pop element is=%d\n",pop(sp)); // Last in first out
         
    
          
    
}