/*
 Programmer: Rumaisa Kashif
 Date: 31/10/23
 Desc: Q6
 */

#include <stdio.h>

int gcd(int n, int p)
{
    //for n>p
    if (n>p)
    {
        if (p==0)
        {
            return n;
        }
        else
        {
            int res=gcd(p, n%p);
            return res;
        }
    }
    else
    {
        if (n==0)
        {
            return p;
        }
        else
        {
            int res=gcd(n, p%n);
            return res;
        }
    }
}

int main()
{
    int n,p;
    printf("enter n and p (2 numbers) to find their gcd:\n");
    scanf("%d%d", &n,&p);
    int ans=gcd(n,p);
    printf("answer is: %d\n", ans);
}//end main
