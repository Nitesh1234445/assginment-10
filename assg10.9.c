#include<stdio.h>
void check(int,int);
int main(int argc, char const *argv[])
{
    int x,y;
    printf("enter a number and a digit");
    scanf("%d%d",&x,&y);
    check(x,y);

    return 0;
}
void check(int n, int d)
{
    int a;
    while (n!=0)
    {
        a=n%10;
        if(a==d)
        break;
        n=n/10;
    }
    if(a==d)
    printf("number contain given digit");
    else
    printf("number not contain given digit");

}
