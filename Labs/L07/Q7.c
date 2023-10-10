//Rumaisa Kashif
//23K0744
//10/10/23
//Desc: Program to multiply two matrices and print their product

#include <stdio.h>
int main()
{
    int arr1[2][2];
    int arr2[2][2];
    int arr3[2][2]={0};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("enter value for row %d and column %d:\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("enter value for row %d and column %d:\n", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int m;
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            for (int m=0;m<2;m++){
            arr3[i][j]+=arr1[i][m]*arr2[m][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
