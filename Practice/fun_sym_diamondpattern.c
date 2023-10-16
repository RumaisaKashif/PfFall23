//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: print the following pattern using a function
//          *
//      *   *   *
//  *   *   *   *   *
//      *   *   *
//          *
#include <stdio.h>
#include <stdbool.h>

void Pattern(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int spaces=0;spaces<n-i;spaces++)
        {
            printf("\t");
        }
        for (int j=0;j<2*i-1;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    for (int i=n-1;i>0;i--)
    {
        for (int spaces=0;spaces<n-i;spaces++)
        {
            printf("\t");
        }
        for (int j=2*i-1;j>0;j--)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int h;
    printf("enter height: \n");
    scanf("%d", &h);
    Pattern(h);
}
