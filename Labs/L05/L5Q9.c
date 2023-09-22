//Program to find solution of quadratic equation and its discriminant
//Rumaisa Kashif
//23K0744
#include <stdio.h>
#include <math.h>//use new library for sqrt
int main()
{
    printf("using the quadratic formula to find roots of the equation f(X)=ax^2+bx+c where a,b,c are integers\n");
    float a,b,c;//define data types and then proceed to take inputs for a,b,c
    printf("enter a:\n");
    scanf("%f", &a);
    printf("enter b:\n");
    scanf("%f", &b);
    printf("enter c:\n");
    scanf("%f", &c);
    printf("first, lets find the discriminant of the same equation!\n");//this will help us determine if we have real roots
    float d;
    d=(b*b)-(4*a*c);
    printf("the discriminant is: %f\n", d);
    if (d>=0)
    {
        float x1,x2;
        x1=((-1*b)/(2*a))+(sqrt((b*b)-(4*a*c))/(2*a));
        x2=((-1*b)/(2*a))-(sqrt((b*b)-(4*a*c))/(2*a));
        printf("the solutions to the equation are:\n");
        printf("%f\n", x1);
        printf("%f\n", x2);
    }
    else
    {
        printf("no real solutions exist\n");
    }
}//end main
