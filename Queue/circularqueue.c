// #include<stdio.h>
// #include<stdlib.h>
// struct circularQueue{
// int f;
// int r;
// int size;
// int *arr;
// };
// int isEmpty(struct circularQueue *ptr)
// {
//     if(ptr->f==ptr->r)
//     {
//         return 1;
//     }
//     return 0;
// }
// int isFull(struct circularQueue *ptr)
// {
//     if(ptr->r+1%ptr->size==ptr->f)
//     {
//         return 1;
//     }
//     return 0;
// }
// void enqueue(struct circularQueue *ptr,int val)
// {
//     if(isFUll(ptr))
//     {
//         printf("\n\nThis circular queue is full basically it's queue overflow:");
//     }
//     else{
//         ptr->r=(ptr->r+1)%ptr->size;   // increamenting the rear 
//         ptr->arr[ptr->r]=val;
//         printf("\nThe enqueued value is= %d",val);
//     }
//     int dequeue(struct circularQueue *ptr)
//     {
//         int a=-1;
//         if(isEmpty(ptr))
//         {
//             printf("\n\nBasically the queue is underflow:");
//         }
//         else{
//                 ptr->f=(ptr->f+1)%ptr->size;
//                 a=ptr->arr[ptr->f];
//         }
//         return a;
//     }
// }
// int main()
// {
//     struct circularQueue *cp;
//     cp->f=cp->r=0;
//     cp->size=5;
//     cp->arr=(int*)malloc(cp->size*sizeof(int));
//     if(cp->arr==NULL)
//     {
//         printf("No memory can be allocated here:\n\n");
//         return -1;
//     }
//     return 0;
// }