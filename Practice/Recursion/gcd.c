#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b)
{
    if (a==b)
    {
        return a;//or b 
    }
    else if (a<b && b%a==0)
    {
        return a;
    }
    else if (a>b && a%b==0)
    {
        return b;
    }
    else 
    {
        if (a<b)
        {
            //euclidian algorithm
            gcd(a,b%a);
        }
        else
        {
            gcd(b,a%b);
        }
    }
}

int main()
{
    int a, b;
    scanf("%d%d", &a,&b);
    printf("gcd is %d", gcd(a, b));
}
