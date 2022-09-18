//Function | Area of a Triangle
#include<stdio.h>

double area(double a,double b)
{
    return (a*b)/2;
}

int main()
{
    double b,h;
    printf("Enter base: ");
    scanf("%lf",&b);
    printf("Enter height: ");
    scanf("%lf",&h);

    printf("Triangle area is: %.2lf ",area(b,h));
}