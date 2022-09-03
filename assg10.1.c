#include<stdio.h>
float area(float);
void main()
{
    float r,A;
    printf("enter a number");
    scanf("%f",&r);
    A=area(r);
    printf("Area is %f",A);
    
}

    float area(float r)
    {
    return 3.14*r*r;
    }
