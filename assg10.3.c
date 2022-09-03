#include<stdio.h>
void even_odd(int);
void main(int argc, char const *argv[])
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

   even_odd(n);
}
    void even_odd(int n)
    {
        if(n%2==0)
        printf("number is even");
        else
        printf("number is odd");
    }
    


