/*
Programmer: Rumaisa Kashif
Date: 5/11/2023
Description: 
Consider a 2-dimensional 3 x 3 array. Write a complete program to achieve the following:
I. Populate this array with values taken from user
II. Find sum of each row in the array & also find the maximum sum among them
III. Display maximum sum & the particular row containing that sum
IV. Replace all values in every row with the maximum sum except for the row containing that sum
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

void rowSum(int arr[][3], int size)
{
    int sum;
    int sumarray[size];
    for (int i=0;i<size;i++)
    {
        sum=0;
        for (int j=0;j<size;j++)
        {
            sum+=arr[i][j];
        }
        sumarray[i]=sum;
        printf("sum of row %d is: %d\n", i+1, sum);
    }
    int highest=sumarray[0];
    int index=0;
    for (int i=0;i<size;i++)
    {
        if (sumarray[i]>highest)
        {
            highest=sumarray[i];
            index=i;
        }
    }
    printf("highest of these sums is %d which is in row %d\n", highest,index+1);
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            if (i!=index)
            {
                arr[i][j]=highest;
            }
        }
    }
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main( )
{
    int arr[3][3];
    printf("enter elements into the 3x3 array:\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    rowSum(arr,3);
}
