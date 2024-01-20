#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next; // self replacating structure
};
void search(struct Node *head, int key)
{
    struct Node *ptr;
    if(head==NULL)
    {
        printf("There is no item in list");
        exit(0);
    }
    else{
        ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->data==key)
            {
                printf("The data %d successfully found in given list",key);
                break;
            }
            ptr=ptr->next;
        }
        if(ptr==NULL)
        {
            printf("Search is unsuccessful %d data is not found in list:",key);
            
        }
    }
}
int main()
{
    struct Node *head,*second,*third;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    // first and second 
    head->data=3;
    head->next=second;
    // second and third
    second->data=5;
    second->next=third;
    // third and null
    third->data=7;
    third->next=NULL;

    search(head,5);


    return 0;
}