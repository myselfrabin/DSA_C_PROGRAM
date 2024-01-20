#include<stdio.h>
int Binarysearch(int *a,int l,int h,int key)
{
    int mid;
    // if(l==h)
    // {
    //     if(a[l]==key)
    //     {
    //         return l;
    //     }
    //     else{
    //         return 0;
    //     }
    // }
    mid=(l+h)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    else if(a[mid]>key)
    {
        return Binarysearch(a,l,mid-1,key);
    }
    else{
        return Binarysearch(a,mid+1,h,key);
    }
    return -1;
}
int main()
{
int a[]={1,2,3,4,5,6};
int key=66,index;
index=Binarysearch(a,0,5,6);
if(index==-1)
{
    printf("NOt found");
}
else{
    printf("Found");
}
return 0;
}