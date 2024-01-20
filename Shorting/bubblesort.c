#include<stdio.h>
void printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A,int n)
{
    int temp;
    int isSort=0;
    for(int i=0;i<n-1;i++)   // for the number of passes
    {
        
      for(int j=0;j<n-1-i;j++)   // for the number of comprasion 
      {
        if(A[j]>A[j+1])
        {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            
        }
              
      }
      
}
}
void bubbleSortAdaptive(int *A,int n)
{
    int temp;
    int isSort=0;
    for(int i=0;i<n-1;i++)   // for the number of passes
    {
        printf("The number of pass is %d\n",i+1);
        isSort=1;
      for(int j=0;j<n-1-i;j++)   // for the number of comprasion 
      {
        if(A[j]>A[j+1])
        {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            isSort=0;
        }
              
      }
      if(isSort)
      {
        return;     // sort vako xa vane return gardine 
      }
    }
}
int main()
{
//int A[]={1,2,3,4,5,6};
 //int A[]={13,1,78,3,7,9};
int A[]={7,11,9,2,17,4};
int n=6;
printArray(A,n);  // print before sort 
bubbleSort(A,n);  // bubble sort call
printArray(A,n);  // print after sort
bubbleSortAdaptive(A,n);  // call bubble sort adaptive 
printArray(A,n);   // print the sorted array in adaptive form 
return 0;
}