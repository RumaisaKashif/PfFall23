/*
 Programmer: Rumaisa Kashif
 Date: 31/10/23
 Desc: Q4
 */
#include <stdio.h>

int factorial(int n)
{
    //base case, return 1 if n=1
    if (n==1)
    {
        return 1;
    }
    //recursive case
    else
    {
        int fac= n * factorial(n-1);
        return fac;
    }
}

int main()
{
    int n;
    printf("enter n for n!:\n");
    scanf("%d", &n);
    int res= factorial(n);
    printf("answer is: %d\n", res);
}//end main
