#include<stdio.h>
int Binarysearch(int *a,int l,int h,int key)
{
    int mid;
    if(l==h)
    {
        return l;
    }
    else{
        return 0;
    }
    mid=(l+h)/2;
    if(key==a[mid])
    {
        return mid;
    }
    else if(key<a[mid])
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
int n=6; 
int key=9,index;
index=Binarysearch(a,0,5,key);
if(index==-1)
{
    printf("Not found");
}   
else{
    printf("Found");
}
return 0;
}