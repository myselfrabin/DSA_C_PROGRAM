#include<stdio.h>
#include<stdlib.h>
struct circularQueue{
int size;
int f;
int r;
int *arr;
};
int isEmpty(struct circularQueue *ptr)
{
    if(ptr->f==ptr->r)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct  circularQueue *ptr)
{
    if((ptr->r+1)%ptr->size==ptr->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct circularQueue *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("The queue is overflow");
    }
    else{
        ptr->r=(ptr->r+1)%ptr->size;
        ptr->arr[ptr->r]=val;
        printf("\nThe enqueued element is= %d\n",val);
    }
}
int dequeue(struct circularQueue *ptr)
{
    int a=-1;
    if(isEmpty(ptr))
    {
        printf("The queue is empty:");
    }
    else{
        ptr->f=(ptr->f+1)%ptr->size;
        a=ptr->arr[ptr->f];
    }
    return a;
}
int main()
{
    struct circularQueue *cp;
    cp=(struct circularQueue*)malloc(sizeof(struct circularQueue));
    if(cp==NULL)
    {
        printf("Memory not allocated:\n\n");
    }
    cp->f=cp->r=0;
    cp->size=5;
    cp->arr=(int*)malloc(cp->size*sizeof(int));
    if(cp->arr==NULL)
    {
         printf("Memory not allocated:\n\n");
    }
    printf("\n\nPutting element is circular Queue....................");
    enqueue(cp,1);
    enqueue(cp,2);
    enqueue(cp,3);
    enqueue(cp,4);
   printf("\n\nThe dequeue element is= %d",dequeue(cp));
   printf("\n\nThe dequeue element is= %d",dequeue(cp));
   printf("\n\nThe dequeue element is= %d",dequeue(cp));
   printf("\n\nThe dequeue element is= %d",dequeue(cp));

    //printf("")
    return 0;
}