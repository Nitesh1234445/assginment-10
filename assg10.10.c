#include<stdio.h>
void prime_factors(int);
int main(int argc, char const *argv[])
{
   int a;
   printf("enter a number");
   scanf("%d",&a);
   prime_factors(a); 
    return 0;
}
void prime_factors(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
    if(n%i==0)
     while(n%i==0)
     {
     n=n/i;
     printf("%d ",i);
     }
    }
}
