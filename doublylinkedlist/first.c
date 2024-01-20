#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *prev;
struct node *next;
};
void DLLTravarse(struct node *ptr)
{
    struct node *ptre;
    ptre=ptr;
    while(ptre!=NULL)
    {
        printf("Element is: %d\n",ptre->data);
        ptre=ptre->next;
    }
}
struct node * insertatbeginning(struct node *ptr,int val)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->prev=newnode->next=NULL;
    if(ptr==NULL)
    {
        ptr=newnode;
    }
    else{
        newnode->next=ptr;
        ptr->prev=newnode;
        ptr=newnode;
    }
    return ptr;
}
 struct node * insertatend(struct node *ptr,int val)
{
    struct node *ptre,*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    new->prev=new->next=NULL;
    ptre=ptr;
    if(ptr==NULL)
    {
          ptr=new;   // mero euta node banako xa tara kunai head xaina tai vayara head lai 
                     // yai new sangai point gardinchu ma 
    }
    else{
         while(ptre->next!=NULL)
         {
            ptre=ptre->next;
         }
         new->prev=ptre;
         ptre->next=new;
    }
    return ptr;
}
struct node * insertatspecifiedpos(struct node *ptr,int pos,int info)
{
    struct node *new,*ptre;
    new=(struct node*)malloc(sizeof(struct node));
    ptre=ptr;
    new->data=info;
    new->prev=new->next=NULL;
    int i=1;
    //pos=3;
    while(i<pos-1)
    {
        ptre=ptre->next;
        i++;
    }
     new->prev=ptr;
     new->next=ptr->next;
     ptr->next->prev=new;
     ptr->next=new;
     return ptr;
     
}
void deleteatbeginnig(struct node *ptr)
{
    struct node *ptre;
    ptre=ptr;
    if(ptr==NULL)
    {
        printf("No element in list");
        exit(0);
    }
    else{
           ptr=ptr->next;
           ptr->prev=NULL;
           free(ptr);
    }
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
    DLLTravarse(head);
    insertatbeginning(head,4);
    printf("After inserting element is\n");
     DLLTravarse(head);
    insertatend(head,7);
    printf("Element after inserting at end is:\n");
    DLLTravarse(head);

    insertatspecifiedpos(head,3,10);
    printf("Inserting at position 3 is:\n");
    DLLTravarse(head);

    // deleteatbeginnig(head);
    // printf("The deletion of first element:\n");
    // DLLTravarse(head);

    return 0;
}