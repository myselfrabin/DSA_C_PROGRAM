#include<stdio.h>
int fact( int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
         return n*fact(n-1);
    }
}
int main()
{
   int n;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    //fact(n);
    printf("THe factorial of %d is %d",n,fact(n));
    return 0;
}