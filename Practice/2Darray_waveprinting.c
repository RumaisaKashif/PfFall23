/*
Programmer: Rumaisa Kashif
Date: 29th October 2023
Description: Program to print elements of a given mxn matrix in wave form
e.g.
-------->
1	2	3
<--------
6	5	4
-------->
7	8	9
*/

#include <stdio.h>

int main()
{
    //taking input from user
    int r,c;
    printf("Please enter the number of rows: \n");
    scanf("%d", &r);
    printf("Please enter the number of columns: \n");
    scanf("%d", &c);
    int arr[r][c];
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("Please enter the element in row %d and column %d: \n", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    //wave formation
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c/2;j++)
        {
            if (i%2==1)
            {
                //reversing order of elements in the odd numbered row
                int temp=arr[i][j];
                arr[i][j]=arr[i][c-j-1];
                arr[i][c-j-1]=temp;
            }
        }
    }

    //printing the output
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}
