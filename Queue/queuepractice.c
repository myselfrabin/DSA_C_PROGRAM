#include<stdio.h>
#include<stdlib.h>
struct queue{
int f;  // f=frontInd
int r;  // r=rear reaer vanakai bacakind ho mero
int size;
int *arr;  
};
int isEmpty(struct queue *ptr)
{
    if(ptr->f==ptr->r)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *ptr)
{
    if(ptr->r==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("\nThe queue is overflow you cannot put any value into it: %d",val);
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=val;
        printf("\nEnqueue element is=%d",val);
    }
}
int dequeue(struct queue *ptr)
{
    int a=-1;
    if(isEmpty(ptr))
    {
        printf("\nThe queue is empty we cannot dequeue any element from it");
        return -1;
    }
    else
    {
        ptr->f++;
         a=ptr->arr[ptr->f];
       // printf("\nThe dequeue element is=%d",return ptr->arr[ptr->f]);
    }
    return a;
}
int main()
{
    struct queue *qp;
    qp=(struct queue *)malloc(sizeof(struct queue));
    if(qp==NULL)
    {
        printf("Memory not allocated:\n");
    }
    qp->size=5;
    qp->f=qp->r=-1;
    qp->arr=(int*)malloc(qp->size*sizeof(int));
    if(qp->arr==NULL)
    {
        printf("Memory not allocated:\n");

    }
      printf("\nThe condition before any element is.................");
      printf("\nThe queue is empty=%d",isEmpty(qp));
      printf("\nThe queue is full=%d",isFull(qp));
      enqueue(qp,1);
      enqueue(qp,2);
      enqueue(qp,3);
      enqueue(qp,4);
      enqueue(qp,5);
      
     printf("The dequeuing condition is...............");
     for(int i=0;i<qp->size;i++)
    printf("\nDequeuing element is=%d",dequeue(qp));
    

return 0;
}