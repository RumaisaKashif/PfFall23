#include <stdio.h>
#include <math.h>

int main()
{
    printf("lets find the sale price of an item!\n");
    float a;
    printf("enter original price of item:\n");
    scanf("%f" , &a);
    float d;
    printf("enter percentage discount:\n");
    scanf("%f",&d);
    float sp;
    sp=a*(1-0.01*d);
    printf("the sale price is %f\n", sp);
    return 1;
}

