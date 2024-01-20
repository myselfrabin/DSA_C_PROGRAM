#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next; // self replacating structure
};
int insertatbeginning(struct node *head,int val)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
     new->data=val;
    if(head==NULL)
    {
       new->next=NULL;
    }
    else{
        new->next=head;
        head=new;
    }
    return head;
         
           
    
   
}
void linklistTraversal(struct node *ptr)
{
    struct node *ptre;
    if(ptr==NULL)
    {
        printf("No element in list:");
    }
    ptre=ptr;
    while(ptre!=NULL)
    {
         printf("Element are: %d\n",ptre->data);
         ptre=ptre->next;
    }
}
int main()
{
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

      head->data=4;
      head->next=second;
       
       second->data=5;
       second->next=third;

       third->data=8;
       third->next=NULL;
     linklistTraversal(head);
    insertatbeginning(head,9);
    printf("Now the element after insertion at beginnin is:\n");
    linklistTraversal(head);

    return 0;
}