/*
Programmer: Rumaisa Kashif
Description: Spiral Printing
*/

#include <stdio.h>

int main() 
{
    int size;
    printf("enter size of NxN matrix: \n");
    scanf("%d", &size);
    int arr[size][size];
    int N=size-1;
    int num=1;
    for (int i=0;i<=N/2;i++) 
    {
    //left to right    
    for (int j=i;j<=N-i;j++)
    {
        arr[i][j]=num;
        num++;
    }
    //top to bottom
    for (int j=i+1;j<=N-i;j++)
    {
        arr[j][N-i]=num;
        num++;
    }
    //right to left
    for (int j=N-1-i;j>=i;j--)
    {
        arr[N-i][j]=num;
        num++;
    }
    //bottom to top
    for (int j=N-1-i;j>i;j--)
    {
        arr[j][i]=num;
        num++;
    }
    }
    //print spiral matrix
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}//end main
