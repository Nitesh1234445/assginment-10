#include<stdio.h>
int fact(int);
void main(int argc, char const *argv[])
{
    int a,F;
    printf("enter a number");
    scanf("%d",&a);
    F=fact(a);
    printf("factorial of number %d is %d",a,F);
}

int fact(int n)
{
    int x=1;
   for(int i=n;i>=1;i--)
   x=x*i;
   return x;
}

