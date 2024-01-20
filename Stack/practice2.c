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
  else
  {
    return 0;
  }
}
int isFull(struct stack *ptr)
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
int push(struct stack *ptr,int val)
{
  if(isFull(ptr))
  {
    printf("The stack is full you cannnot push any item to it basically it's in stack overflow condition: ");
    
  }
  else
  {
    ptr->top++;
    ptr->arr[ptr->top]=val;
  }
}
int pop(struct stack *ptr)
{
  if(isEmpty(ptr))
  {
    printf("The stack is empty it's in stack underflow condition:");
  }
  else
  {
     int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
}
int peek(struct stack *ptr,int i)
{
  if(isEmpty(ptr))
  {
    printf("\nWe cannot perfrom peek operation in empty stack:\n");
    return -1;
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
    printf("Memory not initialized:");
    return -1;
  }
  sp->size=5;
  sp->top=-1;
  sp->arr=(int*)malloc(sp->size*sizeof(int));
  if(sp->arr==NULL)
  {
    printf("Memory not intialized:");
    return -1;
  }
  // printf("The condition before pop is:\n");
  // printf("The stack is empty if it's one %d:",isEmpty(sp));
  // printf("The stack is full if it's one %d",isFull(sp));
  printf("Pushing in stack...................");

  push(sp,4);
  push(sp,7);
  push(sp,12);
  push(sp,15);
  push(sp,19);
  for(int k=0;k<sp->size;k++)
{
  printf("\nThe elements in stack is= %d\n",sp->arr[k]);
}
  for(int j=1;j<=sp->size+1;j++)
  printf("\nThe value at position %d is :%d\n",j,peek(sp,j));  
  
  return 0;
}