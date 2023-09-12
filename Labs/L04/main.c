#include <stdio.h>
#include <math.h>
int main()
{
    printf("using the quadratic formula to find roots of the equation f(X)=ax^2+bx+c where a,b,c are integers\n");
    float a,b,c;
    printf("enter a:\n");
    scanf("%f", &a);
    printf("enter b:\n");
    scanf("%f", &b);
    printf("enter c:\n");
    scanf("%f", &c);
    float x1,x2;
    x1=((-1*b)/(2*a))+(sqrt((b*b)-(4*a*c))/(2*a));
    x2=((-1*b)/(2*a))-(sqrt((b*b)-(4*a*c))/(2*a));
    printf("the solutions to the equation are:\n");
    printf("%f\n", x1);
    printf("%f", x2);
}

