/*
 Programmer: Rumaisa Kashif
 Date: 31/10/23
 Desc: Q7-print fibonacci series up till the nth term using recursion
 */

#include <stdio.h>

int fibonacci(int n)
{
    //base case(s)
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    //recursive case
    else
    {
        int sum=fibonacci(n-1)+fibonacci(n-2);
        return sum;
    }
}

int main()
{
    int n;
    //taking user input
    printf("enter n where n is the number of fibonacci numbers in the series which you wish to print:\n");
    scanf("%d", &n);
    printf("the series is: \n");
    //printing series
    for (int i=1;i<=n;i++)
    {
        int ans= fibonacci(i);
        printf("%d ", ans);
    }
}//end main
