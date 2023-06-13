//C program to find all roots of a quadratic equation.
#include<stdio.h>
#include <math.h>
int main()
{
    float   a, b, c, d, x1, x2;
    printf("Enter the value of a , b, c :");
    scanf("%f %f %f",&a, &b, &c);
    d=(b*b)-4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("Root1=%f \nRoot2=%f",x1,x2);
}
