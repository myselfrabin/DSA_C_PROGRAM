#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=NULL;

    // for another node 
      struct node *current=(struct node*)malloc(sizeof(struct node));
      current->data=8;
      current->next=NULL;
      head->next=current;
      // for another node 
       struct node *current2=(struct node*)malloc(sizeof(struct node));
       current2->data=9;
       current2->next=NULL;
       current->next=current2;

       // this is a method number of 1 maila current 2 banaye 3 ta node launa yastai gari maali
    //    50 ota node chiayo vane ta current49 samma banaunu parcha this is not a good idea 
    //    to do so we use another method to do it
     
    return 0;
}