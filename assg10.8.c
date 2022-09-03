#include<stdio.h>
int nPr(int,int);
int fact(int);
void main()
{
    int a,b;
    printf("enter two numbers where 1st no is greater then 2nd no");
    scanf("%d%d",&a,&b);
    printf("number if combinations is %d",nPr(a,b));
}
int fact(int n)
{
    int x=1;
   for(int i=n;i>=1;i--)
   x=x*i;
   return x;
}


int nPr(int n,int r)
{
return fact(n)/fact(n-r);
}