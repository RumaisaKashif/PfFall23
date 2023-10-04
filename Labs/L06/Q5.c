//Rumaisa Kashif
//23K0744
//program to print the following output
//0 0 0 0
//  1 1
//2 2 2 2

#include <stdio.h>
int main()
{
    printf("enter number of rows needed:\n");
    int rows;
    scanf("%d", &rows);
    int c;
    for (c=0; c<=rows; c++)
    {
        if (c%2==0)
        {
            printf("%d\t%d\t%d\t%d", c,c,c,c);
        }
        else
        {
            printf(" \t%d\t%d\t ", c,c);
        }
        printf("\n");
    }
}
