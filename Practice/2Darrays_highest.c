//Rumaisa Kashif
//23K00744
//Program to find highest element in 2D array
#include <stdio.h>

int main() {
    int row, col;
    printf("enter number of rows and columns:\n");
    scanf("%d %d", &row, &col);
    int arr[row][col]={0};
    printf("enter elements:\n");
    for (int i=0; i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int highest=-9999999;
    for (int i=0; i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (arr[i][j]>highest)
            {
                highest=arr[i][j];
            }
        }
    }
    printf("highest element in array is: %d\n", highest);
}
