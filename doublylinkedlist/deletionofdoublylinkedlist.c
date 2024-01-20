#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node * TraverseDLL(struct node *ptr)
{
   // struct node *ptr1;
    while(ptr!=NULL)
    {
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
    return ptr;
}
struct node * deletefirstnode(struct node *ptr)
{
    struct node *ptr1;
    ptr1=ptr;
    if(ptr==NULL)
    {
        printf("No element in list");
        exit(0);
    }
    ptr=ptr->next;
    ptr->prev=NULL;
    free(ptr1);
    return ptr;
}
int main()
{
     struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
     // head ra second ko garako
    head->prev=NULL;
    head->data=1;
    head->next=second;

    // ava second ra third garum
    second->prev=head;
    second->data=2;
    second->next=third;

    // third and null
    third->prev=second;
    third->data=3;
    third->next=NULL;

    TraverseDLL(head);
    deletefirstnode(head);
    printf("It is a deletion of first node:\n");
     TraverseDLL(head);
    return 0;
}