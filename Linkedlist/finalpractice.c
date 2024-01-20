#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void linkListTraversal(struct node *ptr)
{
  while(ptr!=NULL)
  {
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
  }
}
void insertatbeginning(struct node *head,int data)
{
     struct node *newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=head;
     return newnode;

     // beginning ma halako print garam la

     
}
int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;
  // yo partek ma node create gariyo 
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    // do for head and second 
    head->data=1;
    head->next=second;
    // do for second and third
    second->data=2;
    second->next=third;

    // do for third and fourth
    third->data=3;
    third->next=fourth;

    // do for fourth and null
    fourth->data=4;
    fourth->next=NULL;
    linkListTraversal(head);
    insertatbeginning(head,10);
    printf("\n");
    printf("%d",head->next->data);
  return 0;
}