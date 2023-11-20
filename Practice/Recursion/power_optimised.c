/*
Programmer: Rumaisa Kashif
Date: 20th November 2023
Description: optimised power calculation for larger powers through lesser number of recursive calls
*/

#include <stdio.h>

int power(int a, int b) 
{
    if (b==1) 
    {
        return a;
    } 
    if (b==0) 
    {
        return 1;
    } 

    else 
    {
        if (b%2==0)
          //Note: you can assign any variable of integer type to power(a,b/2) to eliminate the need for two calls.
        return power(a,b/2)*power(a,b/2);
        else
        return power(a,b/2)*power(a,b/2)*a;
        //2^5=2^(5/2) * 2^(5/2) * 2 i.e. 2^2 * 2^2 * 2
    }
}

int main() {
    int a,b;
    printf("Enter base: \n");
    scanf("%d", &a);

    if (a < 1) 
    {
        printf("Invalid input.\n");
        return 0;
    }
    printf("Enter exponent: \n");
    scanf("%d", &b);
    if (b<0)
    {
        printf("Invalid input.\n");
        return 0;
    }

    printf("%d to the power %d is: %d", a,b,power(a,b));
    return 0;
}//end main
