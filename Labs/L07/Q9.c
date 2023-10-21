//Programmer:Rumaisa Kashif
//Date: 18/10/23
//q9

#include <stdio.h>
int main()
{
    int X, Y;
    printf("enter number of company branches: \n");
    scanf("%d", &X);
    printf("enter number of mobile phones in each branch: \n");
    scanf("%d", &Y);
    int arr[X][Y];
    for (int i=0;i<X;i++)
    {
        for (int j=0;j<Y;j++)
        {
            printf("enter amount for company branch %d and mobile id %d\n", i+1, j+1);
            scanf(" %d", &arr[i][j]);
        }
    }
    int totalBill=0;
    for (int i=0;i<X;i++)
    {
        for (int j=0;j<Y;j++)
        {
            totalBill+=arr[i][j];
        }
    }
    printf("the total bill for all the branches is: %d\n", totalBill);
    int bill;
    for (int j=0;j<Y;j++)
    {
        bill=0;
        int i;
        for (i=0;i<X;i++)
        {
            bill+=arr[i][j];
        }
        printf("the total bill for branch %d is %d\n", j+1, bill);
    }
    int highest=arr[0][0];
    for (int i=0;i<X;i++)
    {
        for (int j=0;j<Y;j++)
        {
            if (highest<arr[i][j])
            {
                highest=arr[i][j];
            }
        }
    }
    int branchID;
    int mobileID;
    for (int i=0;i<X;i++)
    {
        for (int j=0;j<Y;j++)
        {
            if (arr[i][j]==highest)
            {
                highest=arr[i][j];
                branchID=i+1;
                mobileID=j+1;
            }
        }
    }
    printf("the Branch ID where the maximum bill arrived is %d and the mobile id is %d\n", branchID, mobileID);
}
