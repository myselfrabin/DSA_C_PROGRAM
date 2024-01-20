#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linklisttraverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *new,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    // first ra second ko garam
    head->data=5;
    head->next=second;

    // second ra third ko garam
    second->data=78;
    second->next=NULL;
    return 0;
    linklisttraverse(head);
}