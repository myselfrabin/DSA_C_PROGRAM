#include<stdio.h>
int TOH(int n,char src,char des,char aux)
{
   if(n==1)
   {
    printf("Move disk 1 from %c to %c\n",src,des);
   }
   else{
    TOH(n-1,src,aux,des);
    printf("Move disk %d from %c to %c\n",n,src,des);
    TOH(n-1,aux,des,src);
    //printf("\nMove disk A and B from %c to %c",aux,des);
   }
}
int main()
{
    int n;
    char src='A';
    char des='C';
    char aux='B';
    // taking source as A destination as B and auxillary as C
    TOH(3,src,des,aux);
    return 0;
}