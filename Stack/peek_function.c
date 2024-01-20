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
int peek(struct stack *sp,int i)
{
      int arrayInd=sp->top-i+1;
      if(arrayInd<0)
      {
        printf("POsition is not suitable for stack:\n");
        return -1;
      }
      else{
        return sp->arr[arrayInd];
      }
}

int main()
{
    struct stack *sp;
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
    peek(sp,1);
    peek(sp,5);
    peek(sp,6);
    peek(sp,8);
    peek(sp,10);
    for(int j=1;j<sp->top+1;j++)
    {
        printf("%d",peek(sp,j));
    }
    return 0;
}