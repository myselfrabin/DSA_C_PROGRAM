#include<stdio.h>
void display(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}
void insertionsort(int *arr,int n)
{
    int key,i,j;
    
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }

}
void bubblesort(int *arr,int n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void selectionsort(int *arr,int n)
{
    int i,j,min;
    min=i;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=arr[j];
            }
        }
        //swap(arr[j],arr[min]);
        //swap(a[min ra a[i]])
        int temp;
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
// int arr[]={4,3,6,2,5,1};
   int arr[]={5,3,7,8,9,1};
int n=6;
insertionsort(arr,n);
printf("The insertion sorted array are:\n");
display(arr,n);
bubblesort(arr,n);
printf("\nThe bubble sort is:\n");
display(arr,n);
selectionsort(arr,n);
printf("\nThe selection sort is:\n");
display(arr,n);
}