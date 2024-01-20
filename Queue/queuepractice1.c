#include<stdio.h>
#include<stdlib.h>
struct queue{
 int size;
 int f;  // frontInd
 int r;  // backInd that is rear last ko vanna khojako
 int *arr;
};
int isEmpty(struct queue *ptr)\
{
    if(ptr->f==ptr->r)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct queue *ptr)\
{
    if(ptr->r==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int enqueue(struct queue *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("\n\nThe queue is overflow you cannot enqueue any element into it..");
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=val;
        printf("\n\n..The enqueue element is= %d\n",val);
    }
}
int dequeue(struct queue *ptr)
{
    int a=-1;
    if(isEmpty(ptr))
    {
        printf("\n\nThe queue is underflow you cannot dequeue any element into it..");
    }
    else{
      ptr->f++;
      a=ptr->arr[ptr->f];
      //printf("\n\nThe dequeue element is= %d",ptr->arr[ptr->f]);
    }
    return a;
    printf("\n\nThe dequeue element is= %d",a);

}
int main()
{
    struct queue *qp=(struct queue*)malloc(sizeof(struct  queue));
    if(qp==NULL)
    {
        printf("The memeory is not allocated:\n");
        return -1;
    }
    qp->f=qp->r=-1;
    qp->size=5;
    qp->arr=(int*)malloc(qp->size*sizeof(int));
     if(qp->arr==NULL)
    {
        printf("The memeory is not allocated:\n");
        return -1;
    }
    printf("To checking the queue is empty or full..............\n\n");
    printf("\n\n.. The queue is empty if %d=1",isEmpty(qp));
    printf("\n\n.. The queue is full if %d=1",isFull(qp));
    enqueue(qp,1);
    enqueue(qp,2);
    enqueue(qp,3);
    enqueue(qp,4);
    enqueue(qp,5);

    printf("\n\nThe turn of dequing element..............");
    for(int i=0;i<qp->size;i++)
    {
        printf("\nThe dequing element is= %d",dequeue(qp));
    }

return 0;
}