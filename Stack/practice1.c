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
int main()
{
    struct stack *sp;
    sp=(int *)malloc(sizeof(struct stack));
    if(sp==NULL)
    {
        printf("Memory not allocated successfully:");
        return -1;
    }
    sp->size=5;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    if(sp->arr==NULL)
    {
        printf("Memory not allocated successfully:");
        return -1;
    }
   printf("To check the the stack is empty or not:\n");
   sp->top++;
   sp->top=2;
   int choice;
   while(1)
   {
    printf("1.STACK\n 2.PUSH\n 3.POP\n 4.DISPLAY\n 5.EXIT\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1:
//         push(sp);
//         break;
//         case 2:
//         pop(sp);
//         break;
//         case 3:
//         display();
//         break;
//         case 4:
//         exit();
//         break;
//     }
//    }
   printf("If I have 1 then empty if 0 then not empty so %d:",isEmpty(sp));
    return 0;
}