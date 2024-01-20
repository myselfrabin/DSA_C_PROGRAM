#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next; // self replacating structure
};
//void enqueue
void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
      printf("Element is:%d\n",ptr->data);
      ptr=ptr->next;
    }
    
}
void enqueue(int n,struct node *ptr)
{
    struct node *new,*ptre;
    struct node *front=NULL;
    struct node *rear=NULL;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("There is no space in heap similary queue overflow");
    }
    else{
          new->data=n;
          new->next=NULL;
    }
    if(rear==NULL)
    {
        front=rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
    printf("\nEnqueue element is:%d",rear->data);
}
void dequeue()
{
    struct node *front=NULL;
    struct node *rear=NULL;
     struct node *ptre;
     ptre=front;
    if(front==NULL&&rear==NULL)
    {
        printf("Queue empty cannot dequeue");
    }
    else{
        printf("Dequeue element is:%d",front->data);
        
        front=front->next;
        free(ptre);
    }
    
}
int main()
{
    // struct node *front=NULL;
    // struct node *rear=NULL;
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
       traversal(head);
       enqueue(9,head);
       dequeue(head);
    return 0;
}