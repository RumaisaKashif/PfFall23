/*
Programmer: Rumaisa Kashif
Date: 20th November 2023
Description: recursion-power
*/

#include <stdio.h>
int power(int a, int b)
{
    if (b==0)
    {
        return 1;
    }
    else 
    {
        int ans=a*power(a, b-1);
        return ans;
    }
}

int main() {
    int a,b;
    printf("enter base: \n");
    scanf("%d", &a);
    if (a<1)
    return 0; 
    printf("enter exponent: \n");
    scanf("%d", &b);
    if (b<0)
    return 0; 
    printf("ans is: %d\n", power(a,b));
}//end main
