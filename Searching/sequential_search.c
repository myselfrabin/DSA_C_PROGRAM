#include<stdio.h>
int sequentialsearch(int arr[],int key)
{
    int i;
    for(i=0;i<8;i++)
    {
        if(arr[i]==key)
        
            return i;
        
       
    }
     return -1;
}
int main()
{
    int arr[]={1,10,5,8,9,6,3,7};
    int key=100,index;
    index=sequentialsearch(arr,key);
    if(index==-1)
    {
        printf("%d is not found",key);
    }
    printf("%d is found at %d index",key,index);
    return 0;
}