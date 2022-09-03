#include<stdio.h>
#include<conio.h>
int si(int,int,int);
void main()
{
    int P,R,T,SI;
    printf("enter values of P,R,T ");
    scanf("%d%d%d",&P,&R,&T);
    SI=si(P,R,T);
    printf("simple interest is %d",SI);

}
int si(int p,int r,int t)
{
return p*r*t;
}
