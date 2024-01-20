#include<stdio.h>
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return (a,a%b);
    }
}
int main()
{
    int a,b;
    printf("Enter the two number you want to find gcd of:");
    scanf("%d %d",&a,&b);
    printf("The GCD of a and b is %d:",GCD(a,b));
    return 0;
}