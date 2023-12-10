//Program hailstone sequence recrusively
#include <stdio.h>
#include <stdlib.h>

void hailstone(int n)
{
    if (n==1)
    {
        printf("1");
        return;
    }
    if (n%2==0)
    {
        printf("%d\t", n);
        hailstone(n/2);
    }
    else if (n%2==1)
    {
        printf("%d\t", n);
        hailstone(3*n+1);
    }
}

int main()
{
    int n;
    printf("enter num:\n");
    scanf("%d", &n);
    hailstone(n);
}
