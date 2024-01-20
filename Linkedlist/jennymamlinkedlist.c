#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
} *head;
void create_list(int info)
{
    struct node *q,*tmp;
    // creating DMA for to allocate node
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=info;
    tmp->next=NULL;

    if(head==NULL)  // linked list ma kunai element na vaye
    {
        head=tmp;
    }
    else{
          // element inserted at the end 
          q=head;
          while(q->next!=NULL)
          {
            q=q->next;
            q->next=tmp;
          }
    }
}
int main()
{
    struct node *head,*newnode,*temp;
    }
    

 