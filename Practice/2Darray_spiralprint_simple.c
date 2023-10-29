/*
 Programmer: Rumaisa Kashif
 Date: 29/10/2023
 Description: Program to print 2D array elements in the form of a spiral
 */

#include <stdio.h>

int main()
{
    int r,c;
    printf("Please enter the number of rows of the matrix: \n");
    scanf("%d", &r);
    printf("Please enter the number of rows of the matrix: \n");
    scanf("%d", &c);
    int arr[r][c];
    int maxr=r-1;
    int minr=0;
    int minc=0;
    int maxc=c-1;
    int count=0;
    
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("Please enter element in row %d and column %d: \n", i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    while (count<(r*c))
    {
        for (int j=minc;j<=maxc;j++)
        {
            printf("%d\t", arr[minr][j]);
            count++;
        }
        minr++;
        if (count>=(r*c))
        {
            break;
        }
        
        for (int i=minr;i<=maxr;i++)
        {
            printf("%d\t", arr[i][maxc]);
            count++;
        }
        maxc--;
        if (count>=(r*c))
        {
            break;
        }
        
        for (int j=maxc;j>=minc;j--)
        {
            printf("%d\t", arr[maxr][j]);
            count++;
        }
        maxr--;
        if (count>=(r*c))
        {
            break;
        }
        
        for (int i=maxr;i>=minr;i--)
        {
            printf("%d\t", arr[i][minc]);
            count++;
        }
        minc++;
        if (count>=(r*c))
        {
            break;
        }
    }
    printf("\n");
}//end main
