#include<stdio.h>
// insert garum la 
void insert(int a[100],int n)
{
    int pos,i,el;
    printf("\nEnter the position where you want to insert the element:");
    scanf("%d",&pos);
    printf("\nEnter the element which you want to insert:");
    scanf("%d",&el);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=el;
    n=n+1;  // array size increase while inserting 
    for(int i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }    

}
void delete(int a[100],int n)
{
    int pos,i;
    printf("\nEnter the position which element you want to delete:");
    scanf("%d",&pos);
    for(i=pos;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;  // array size decrease while deleting

    for(i=0;i<=n;i++)
    {
        printf("\t%d",a[i]);
    } 
}
void update(int a[100],int n)
{
    int pos,el;
    printf("\nEnter the position where you want to update the value:");
    scanf("%d",&pos);
    printf("\nEnter the value you want to modify or update:");
    scanf("%d",&el);
    a[pos]=el;
    for(int i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    } 

}
void traverse(int a[100],int n)
{
    int i;
    printf("The array are:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
void merging(int a[100],int b[100],int n,int m)
{
    int i; // j=n is setting the j is equal to size of first list 
    printf("\nEnter the number of element of second list:");
    scanf("%d",&m);
    printf("\nEnter element of second list:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        a[n+i]=b[i];
       
        n=n+1;
    }
    
    printf("The two merged list are:\n");
    for(i=0;i<m;i++)
    {
        printf(" %d",b[i]);
    }
}


int main()
{
    int a[100],i,n,b[100],m;
    printf("\nEnter the number of element you want:");
    scanf("%d",&n);
    printf("Enter the %d of a element:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe inserted element of array is=");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    insert(a,n);
    delete(a,n);
    update(a,n);
    traverse(a,n);
    merging(a,b,n,m);
    return 0;
}