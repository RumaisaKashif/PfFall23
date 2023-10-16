//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: Pascal's traingle of height h
#include <stdio.h>

int factorial(int n)//no use of array
{
    if (n <= 1)
    {
        return 1;
    }
    int mul=1;
    for (int i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    return mul;
}

void C(int l)
{
    int p;
    for (int j=0;j<l;j++)
    {
        for (int spaces=0;spaces<l-j;spaces++)//optional formatting
        {
            printf(" ");
        }
        for (int m=0;m<=j;m++)//take note, m<=j not m<l
        {
            p=factorial(j)/(factorial(j-m)*factorial(m));
            printf("%d ", p);
        }
        printf("\n");
    }
}

int main()
{
    int height=0;
    printf("enter height of triangle: \n");
    scanf("%d", &height);
    C(height);
}
