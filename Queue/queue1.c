#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *ptr)
{
    if(ptr->f=ptr->r)
    {
        return 1;
    }
    else{
         return 0;
    }
    
}
int isFull(struct queue *ptr)
{
    if(ptr->r=ptr->size-1)
    {
        return 1;
    }
    else{
               return 0;
    }
   
}
void enqueue(struct queue *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("The queue is full can't enqueue the value here:");
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=val;
    }
}
int main()
{
    struct queue qp;
   
    qp.size=5;
    qp.f=qp.r=-1;
    qp.arr=(int*)malloc(qp.size*sizeof(int));
    if(qp.arr==NULL)
    {
        printf("Memory not allocated:");
    }
   
//    if(isFull(qp))
//    {
//     printf("Queue is full");
//    }
   enqueue(&qp,2);
   if(isEmpty(&qp))
   {
    printf("Queue is empty:");
   }
    
    free(qp.arr);
    return 0;
}