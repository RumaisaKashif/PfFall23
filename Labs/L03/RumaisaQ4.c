//DISCOUNT CALCULATOR
//Rumaisa Kashif
//23K0744

#include <stdio.h>

int main()
{
    printf("lets calculate the sale price of a fat brains pipsquigs!\n");
    printf("enter discount as a percentage:\n");
    int d;
    scanf("%d", &d);
    printf("enter original price of product:\n");
    float op;
    scanf("%f", &op);
    float sp;
    sp=op*(1-0.01*d);
    printf("sale price is %f\n", sp);
}

