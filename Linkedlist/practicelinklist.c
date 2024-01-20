#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;   // self replecating structure
};
void linklisttraverse(struct Node *ptr)
{
    while(ptr!=NULL)
    {
                printf("Element is:%d\n",ptr->data);
                ptr=ptr->next;
    }
    
}
// Case 1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    ptr->next = head;
    return ptr; 
    while(ptr!=NULL)
    {
           printf("Element after insert is:%d\n",ptr->data);
           ptr=ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    // doing for head and second
    head->data=10;
    head->next=second;  // head next pointer is pointing to second node 

    // doing for second and third
    second->data=20;
    second->next=third;

    // doing for last node third

    third->data=30;
    third->next=NULL;

    linklisttraverse(head);
    insertAtFirst(head,90);
    return 0;
}