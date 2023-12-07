//Finding the balance points of a user enter 2D array, along with their total count

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void balanceCount(int arr[][5], int* count)
{
    *count=0;
    for (int x=0;x<5;x++)
    {
        for (int y=0;y<5;y++)
        {
            bool flag=true;//should be reset after each iteration
            int X=x,Y=y;
            int A=x,B=y;
            int sum1=0, sum2=0;
            int sum3=0,sum4=0;

            //check for sum1 and sum2
            int i=X;
            for (int j=0;j<Y;j++)
            {
                sum1+=arr[i][j];
            }
            for (int j=Y+1;j<5;j++)
            {
                sum2+=arr[i][j];
            }
            if (sum1!=sum2)
            {
                flag=false;
            }

            //check for sum3 and sum4
            int j=B;
            for (int i=0;i<A;i++)
            {
                sum3+=arr[i][j];
            }
            for (int i=A+1;i<5;i++)
            {
                sum4+=arr[i][j];
            }
            if (sum3!=sum4)
            {
                flag=false;
            }

            if (flag)
            {
                (*count)++;
                printf("(%d,%d)\n",i,j);
            }
        }
    }
}

int main()
{
    int count;
    int arr[5][5];
    printf("Enter values into 5x5 2D array:\n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    balanceCount(arr, &count);
    printf("Count of Balance Points is: %d\n", count);
}
