//Programmer Name: Rumaisa Kashif
//Date: 29th October 2023
//Description: program to rotate nxn matrix 90 degree clockwise without using new matrix

//INPUT
// 1 2 3 
// 4 5 6 
// 7 8 9 

//INTERMEDIATE: TRANSPOSE

//OUTPUT:
// 7 4 1
// 8 5 2 
// 9 6 3
#include <stdio.h>

int main() {
    int r;
    printf("enter number of rows/col: \n");
    scanf("%d", &r);
    int arr[r][r];
  
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<r;j++)
        {
            printf("enter element in row %d and column %d: \n", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
  
    //transpose of matrix w/o using any additional matrix
    int temp;
    for (int i=0;i<3;i++)
    {
        //j=i so that the values don't get reswapped to give the user-entered matrix again
        for (int j=i;j<3;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("tranpose is: \n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
  
    //reversing order of elements in each row to obtain 90 degrees rotated matrix
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<r/2;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][r-j-1];
            arr[i][r-j-1]=temp;
        }
    }
    //printing desired output
    printf("The matrix after being rotated by 90 degrees clockwise is: \n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}//end main
