/*
 Programmer: Rumaisa Kashif
 Date: 31/10/23
 Desc: Q5
 */

#include <stdio.h>


int prod(int n, int p)
{
    //base case
    if (p==1)
    {
        return n;
    }
    //recursive case
    else
    {
        int res= n + prod(n,p-1);
        return res;
    }
}

int main()
{
    int a,b;
    printf("enter the numbers to be multiplied, lower number goes second!\n");
    scanf("%d%d", &a,&b);
    int ans=prod(a,b);
    printf("answer: %d\n", ans);
}//end main
