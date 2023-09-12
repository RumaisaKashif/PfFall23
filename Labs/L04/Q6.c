//Rumaisa Kashif 23k0744
//Q6
//Code for diamond

#include <stdio.h>
#include <math.h>
int main()
{
    printf("today we shall print a diamond comprising 2n-1 rows where n is an integer!\n");
    int n, s, c;
    c=1;
    printf("enter integer n:\n ");
    scanf("%d", &n);
    while (c<=(2*n-1))
    {
        if (c<=n)
        {
            s=0;
            do
            {
                printf(" ");
                s=s+1;
            } while(s<n-c);
            printf("*");
            s=0;
            do
            {
                printf(" ");
                s=s+1;
            } while(s<c-1);
            if (c>1)
            {
                printf("*");
            }
        }
        else
        {
            s=0;
            do
            {
                printf(" ");
                s=s+1;
            } while(s<c-n);
            printf("*");
            s=0;
            do
            {
                printf(" ");
                s=s+1;
            } while(s<2*n-1-c);
            if (c<2*n-1)
            {
                printf("*");
            }
        }
        c=c+1;
        printf("\n");
      
        
    }
}

