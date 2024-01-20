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
        printf("The stack is in overflow condition:\n");
    }
    else{
        ptr->top++;
     ptr->arr[ptr->top]=val;
        printf("Enter a data:\n");
        scanf("%d",&val);
        printf("Data added successfully:\n");
    }
}
void peek(struct stack *ptr,int i)
{
    if(isEmpty(ptr))
    {
        printf("\nWe cannot perform peek function here:\n");
        return -1;
    }
    else{
        return ptr->top-i+1;
    }
    
    
}
int main()
{
    struct stack *sp;
    sp=(int *)malloc(sizeof(struct stack));
    if(sp==NULL)
    {
        printf("Memory not allocated:");
        return -1;
    }
    sp->size=5;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    if(sp->arr==NULL)
    {
        printf("Memory not allocated:");
        return -1;
    }
     //printf("%d",push(sp,sp->arr));
     //printf("%d",push(sp,sp->arr));
     
     int j;
      push(sp,j);
     for(int i=0;i<=sp->size-1;i++)
     {
        
        printf("\n%d",sp->arr[i]);
         
     }
    return 0;
}