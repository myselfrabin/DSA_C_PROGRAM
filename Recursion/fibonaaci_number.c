#include<stdio.h>
int main()
{
    int n,i;
    printf("Entet the term you want fibonaaci number of:");
    scanf("%d",&n);
    fibo(n);
    printf("The fibonaaci numbers are:");
    for(i=0;i<n;i++)
    {
        printf("%d",fibo(i));
    }
    return 0;
}
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