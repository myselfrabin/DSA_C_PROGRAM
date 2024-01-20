#include<stdio.h>
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int n,a,b;
    printf("How many fibonacci number you want?");
    scanf("%d",&n);
   printf("The fibonaaci number till %d is:",n);
   //printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",fibo(i));

    }
    return 0;
}