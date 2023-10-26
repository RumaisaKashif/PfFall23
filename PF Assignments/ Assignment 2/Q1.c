/*
 Programmer: Rumaisa Kashif
 Date: 18/10/23
 Desc: evaluating batting performance of batsmen using 2D arrays
ٰ*/
#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter number of batsmen and number of innings:\n");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("Enter elements:\n");
    for (int i=0; i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("Enter runs scored by batsman number %d for innings number %d: \n", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    int sum, avg, highest;
    int cen, hc;
    for (int i=0;i<row;i++)
    {
        hc=0;
        cen=0;
        highest=arr[0][0];
        avg=0;
        sum=0;
        for (int j=0;j<col;j++)
        {
            sum+=arr[i][j];
            if (arr[i][j]>highest)
            {
                highest=arr[i][j];
            }
            if (arr[i][j]>=100)
            {
                cen+=1;
            }
            if (arr[i][j]>=50 && arr[i][j]>100)
            {
                hc+=1;
            }
        }
        avg=sum/col;
        printf("Sum for batsman %d is: %d\n", i+1, sum);
        printf("The average runs per inning played for batsman %d is: %d\n",i+1,avg);
        printf("Sum for batsman %d is: %d\n", i+1, sum);
        printf("The highest runs scored in any inning by batsman % is: %d\n", i+1, highest);
        printf("Number of centuries for batsman %d is: %d\n", i+1,cen);
        printf("Number of half centuries for batsman %d is: %d\n", i+1,hc);
    }
}//end main
