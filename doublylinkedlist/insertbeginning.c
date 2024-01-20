#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
void display(struct node *head)
{
    while(head!=NULL)
    {
        printf("Element is:%d\n",head->data);
        head=head->next;
    }
}
struct node * insertbeg(struct node *head,int val)
{
     struct node *new=(struct node*)malloc(sizeof(struct node));
     new->data=val;
     new->prev=new->next=NULL;
     if(head==NULL)
     {
        
        head=new;
     }

     else{
        new->next=head;
        head=new;
        new->prev=NULL;
     }
     return head;
     printf("%d",head->data);
}
struct node *insertend(struct node *head,int val)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    struct node *ptr;
    ptr=head;
    new->data=val;
    if(head==NULL)
    {
        head=new;
    }
    else{
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        new->next=NULL;
        new->prev=ptr;
        ptr->next=new;
    }
    return head;
}
struct node* insertafternod(struct node *head,int val,int key)
{
     struct node *new=(struct node*)malloc(sizeof(struct node));
    struct node *ptr;
    ptr=head;
    new->data=val;
    if(head==NULL)
    {
        head=new;
    }
    else{
           while(ptr->data!=key)
           {
            ptr=ptr->next;
           }
        new->prev=ptr;
        new->next=ptr->next;
        ptr->next->prev=new;
        ptr->next=ptr;
    }
    return head;
}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=7;
    head->next=second;

    second->prev=head;
    second->data=8;
    second->prev=NULL;

    display(head);
    insertend(head,3);
    printf("Element after inserting at last is:\n");
    display(head);

    insertafternod(head,9,3);
    printf("Inserting 9 inplace of 3:\n");
    display(head);

    // insertbeg(head,3);
    // printf("%d",head->data);
    // display(head);

return 0;
}