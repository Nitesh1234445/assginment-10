#include<stdio.h>
void N_natural_no(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    N_natural_no(n);
    return 0;
}

void N_natural_no(int n)
{
    for(int i=1;i<=n;i++)
    printf("%d ",i);

}