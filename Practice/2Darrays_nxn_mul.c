//Programmer: Rumaisa Kashif
//Date: 12/10/23
//Desc: matrix multiplication of 2 n by n matrices
#include <stdio.h>
int main()
{
    int row1,col1,row2,col2;
    printf("enter number of rows and columns for matrix 1:\n");//take size of matrix 1
    scanf("%d %d", &row1, &col1);
    int arr1[row1][col1];//note: arr1[row1][col1]={0} is not a valid intitialization
    printf("enter elements for matrix one\n");//take input for element at each index
    for (int i=0;i<row1;i++)
    {
        for (int j=0; j<col1; j++)
        {
            printf("enter element for row %d and column %d\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("enter number of rows and columns for matrix 2:\n");//take size of matrix 2
    scanf("%d %d", &row2, &col2);
    if (col1!=row2)//check condition for validity of matrices being multiplied
    {
        printf("matrix multiplication is not possible\n");
        return 1;
    }
    else//if no of columns of matrix 1 match no of rows of matrix 2, proceed
    {
        int arr2[row2][col2];
        printf("enter elements for matrix two\n");//take input for element at each index
        for (int i=0;i<row2;i++)
        {
            for (int j=0; j<col2; j++)
            {
                printf("enter element for row %d and column %d\n", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        int arr3[row1][col2];//product matrix declared
        for (int i=0;i<row1;i++)
        {
            for (int j=0;j<col2;j++)
            {
                int sum=0;
                for (int m=0;m<col1;m++)
                {
                    sum+=arr1[i][m]*arr2[m][j];
                }
                arr3[i][j]=sum;
            }
        }
        for (int i=0;i<row1;i++)
        {
            for (int j=0;j<col2;j++)
            {
                printf("%d\t", arr3[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}//end main
