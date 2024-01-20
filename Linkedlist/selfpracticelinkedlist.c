#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp;
    head=0;
    int choice;
    newnode=(struct node*)malloc(sizeof(struct node));
    while(choice)
    {
        printf("Enter a data");
        scanf("%d",&newnode->data);
        newnode->next=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else{
            temp->next=newnode;
            temp=newnode;
    }
       printf("Do you want to continue(0,1)");
       scanf("%d",&choice);
    }
    
    return 0;
}