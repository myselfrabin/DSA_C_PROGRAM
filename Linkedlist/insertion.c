#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct node *next;
};
struct Node * display(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
    return ptr;
}
struct node* insertatbeg(struct node* ptr,int val)
{
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
     new->data=val;
     if(ptr==NULL)
     {
        printf("Empty list");
        
     }
     else{
        new->next=ptr;
        ptr=new;
     }
     return ptr;
}
int main()
{
     struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    display(head);
    insertatbeg(head,15);
    printf("After insertion is:\n");
    display(head);
    return 0;
}