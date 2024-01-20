#include<stdio.h>
#include<stdlib.h>
struct queue{
int size;
int *arr;
int f;
int r;
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
int main()
{
    struct queue *qp=(struct queue*)malloc(sizeof(struct queue));
    if(qp==NULL)
    {
        printf("\n\nThe memory not allocated:");
        return -1;
    }
    qp->f=qp->r=-1;
    qp->size=5;
    qp->arr=(int*)malloc(qp->size*sizeof(int));
    if(qp->arr==NULL)
    {
        printf("\n\nMemory not allocated:");
        return -1;
    }
    printf("\n\nTo checking the queue is empty or full is....................");
    printf("\n\nThe queue is empty if %d", isEmpty(qp));


        free(qp);
        free(qp->arr);
return 0;
}