#include<stdio.h>
#include<stdlib.h>
struct stack{
int data;
struct stack* next; // self replacating structure
};
int push(struct stack *top,int info)
{
    struct stack *new=(struct stack*)malloc(sizeof(struct stack));
    if(new==NULL)
    {
        printf("Stack overflow");
    }
    else if(top==NULL)
    {
        new->data=info;
        new->next=NULL;
        top=new;
    }
    else{
        new->data=info;
        new->next=top;
        top=new;
    }
    printf("%d is pushed", new->data);

}
int main()
{
    //struct stack *new;
    struct stack *head;
    push(head,1);
    push(head,2);
    return 0;
}