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
void push(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("The stack is overflow condition:");
        
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
        printf("The stack is in underflow condition:");
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void display(struct stack *ptr)
{
    for(int i=ptr->size-1;i>=0;i--)
    {
        printf("\t%d",ptr->arr[i]);
    }
}
int main()
{
    struct stack *sp;
    int ch,j;
    sp=(int*)malloc(sizeof(struct stack));
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
    system("cls");
    do{
        
        printf("1.Push\n 2.Pop\n 3.Display");
        switch(ch)
        {
            case 1:
            push(sp,j);
            break;
            case 2:
            pop(sp);
            break;
            case 3:
            display(sp);
            break;
            default:
            printf("Invalid character:");
        }
        
    }
    while(ch!=0);
    free(sp);
    free(sp->arr);
    return 0;
}