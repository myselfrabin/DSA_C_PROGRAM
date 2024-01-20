#include<stdio.h>
void sequentialsearch(int *a,int n)
{
    int key,i;
    printf("Enter the key you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d is successfully found at %d location",key,i);
            break;
        }
    }
    if(i==n)
    {
        printf("Not found");
    }
}
int main()
{
    int a[100],i,n;
    printf("Enter the number of element in array:\n");
    scanf("%d",&n);
    printf("Enter %d numbers of array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sequentialsearch(a,n);
    return 0;
}