#include<stdio.h>
#include<math.h>
 
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}
int main()
{
    int a,b;
    printf("Enter the number a and b:");
    scanf("%d %d",&a,&b);
    GCD(a,b);
    printf("\nThe GCD number of %d and %d is= %d\n",a,b,GCD(a,b));
    return 0;
}