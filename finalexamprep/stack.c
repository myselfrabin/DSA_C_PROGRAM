#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
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
// push element into the stack
void push(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("The stack is overflow can't push element to it:");
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
        printf("The stack is in underflow codition:");
    }
    else{
              int val=ptr->arr[ptr->top];
              ptr->top--;
              return val;
    }
}
int peek(struct stack *ptr,int i) // i for position
{
    if(isEmpty(ptr))
    {
        printf("No peek operation perform:");
    }
    else{
        return ptr->arr[ptr->top-i+1];
    }
}
int main()
{
    struct stack *sp;
    sp=(struct stack*)malloc(sizeof(struct stack));
    if(sp==NULL)
    {
          printf("Memory not allocated");
         return -1;
    }
    sp->size=5;
    sp->top=-1;
    sp->arr=(struct stack*)malloc(sizeof(int));
    if(sp->arr==NULL)
    {
        printf("Memory not allocated");
        return -1;
    }
     push(sp,5);
    push(sp,6);
    push(sp,7);
    push(sp,8);
    push(sp,9);
    



    printf("To check if the stack is full or empty:");
    printf("\nThe stack is empty if it is 1 i.e %d",isEmpty(sp));
     printf("\nThe stack is not empty if it is 0 i.e %d",isEmpty(sp));
     printf("\nNow turn for checking stack full");
     printf("\nThe stack is full if it is 1 i.e %d",isFull(sp));
      printf("\nThe stack is not full if it is 0 i.e %d",isFull(sp));
      // pushing element into stack 
       printf("\n");
      for(int i=0;i<sp->top;i++)
      {
        printf("%d\t",sp->arr[i]);
      }
     peek(sp,3);
    free(sp);

    return 0;
}