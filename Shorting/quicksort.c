#include<stdio.h>
int i,j;
int partition(int *a,int l,int h)
{
    int temp;
    int pivot=a[l];
    int i=l,j=h;
    while(i<j)
    {
         while(a[i]<=pivot);
         i++;
          while(a[j]>pivot);
          j--;
   
    if(i<j)
    {
        // need to swap
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
    }
    }
    temp=a[l];
    a[l]=a[j];
    a[j]=temp;  
    // swapping pivot and j yadi cross garyo vane 
    return j; // returning pivot to its position
    
}
int quicksort(int *a,int l,int h)
{
    if(l<h)
    {
       j=partition(a,l,h); // partition gaeako lai j ma haley
       quicksort(a,l,j-1);
       quicksort(a,j+1,h);
      
    }
}
int main()
{
    int a[]={5,3,2,6,4,1,3,7};
    int n=8;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    // partition(a,0,7);
    //  quicksort(a,0,7);
    //  printf("\nElement after quick sort is:");
    //  for(i=0;i<n;i++)
    // {
    //     printf("%d\t",a[i]);
    // }
    return 0;
}