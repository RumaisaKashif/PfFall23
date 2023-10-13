// Programmer: Rumaisa Kashif
// Desc: program to print sum of 2 arrays
// 12/10/23
#include <stdio.h>

int main() {
    int arr1[2][2]={0};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("enter value for row %d and column %d:\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[2][2]={0};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("enter value for row %d and column %d:\n", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr3[2][2]={0};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}
