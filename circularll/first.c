#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node * create(struct node *ptr,int val)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    struct node *ptr1;
    ptr=NULL;
    if(ptr==NULL)
    {
      ptr=newnode;
    }
    else{
        ptr1=ptr;
        ptr1=ptr1->next;
        ptr1=newnode;
        ptr1->next=ptr;
    }
   return ptr;
}
void display(struct node *ptr)
{
    // struct node *ptre;
    // ptre=ptr;
    while(ptr!=NULL)
    {
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
 struct node *head=(struct node*)malloc(sizeof(struct node));
 create(head,4);
 //create(head,5);
 display(head);
return 0;
}