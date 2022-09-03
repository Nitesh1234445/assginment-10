#include<stdio.h>
int nCr(int,int);
int fact(int);
void main()
{
    int a,b;
    printf("enter two numbers where 1st no is greater then 2nd no");
    scanf("%d%d",&a,&b);
    printf("number if combinations is %d",nCr(a,b));
}
int fact(int n)
{
    int x=1;
   for(int i=n;i>=1;i--)
   x=x*i;
   return x;
}


int nCr(int n,int r)
{
return fact(n)/(fact(r)*fact(n-r));
}