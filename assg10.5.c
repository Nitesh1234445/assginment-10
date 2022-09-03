#include<stdio.h>
void N_odd_natural_no(int);
int main(int argc, char const *argv[])
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    N_odd_natural_no(a);
    return 0;
}

void N_odd_natural_no(int n)
{
    for (int i = 1; i <= n; i++)
    printf("%d ",2*i-1);

}