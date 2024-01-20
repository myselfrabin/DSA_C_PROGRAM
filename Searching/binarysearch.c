#include<stdio.h>
int binarysearch(int arr[],int lb,int ub,int key)
{
    int mid;
    if(lb<=ub)   // base criteria
    {
        mid=(lb+ub)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
          else if(arr[mid]>key)
         {
            return binarysearch(arr,lb,mid-1,key);
         }
         else{
            return binarysearch(arr,mid+1,ub,key);
         }
    }
    return -1;
}
int main()
{
    int arr[]={3,5,7,8,10,15,17,20};
    int key=7,index;
    index=binarysearch(arr,0,7,key);
    if(index==-1)
    {
        printf("%d key is not found",key);
    }
    else{
        printf("%d key found at %d index",key,index);
    }
    return 0;
}