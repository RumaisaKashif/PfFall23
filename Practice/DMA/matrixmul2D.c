//Using pointer to pointer in DMA to multiply 2 matrices

#include <stdio.h>
#include <stdlib.h>

void populateMatrices(int** matrix1, int** matrix2, int rows,int cols)
{
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            matrix1[i][j]=i*cols+j+1;//sequential population(1,2,3,..)
            matrix2[i][j]=i*cols+j+1;//sequential population
        }
    }
}

void mulMatrices(int** matrix1, int** matrix2, int** matrix3,int rows,int cols)
{
    int sum;
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            sum=0;
            for (int k=0;k<cols;k++)
            {
                sum+=matrix1[i][k]*matrix2[k][j];
            }
            matrix3[i][j]=sum;
        }
    }
}

void printResult(int** matrix3,int rows,int cols)
{
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int rows=2;
    int cols=2;

    int** matrix1;
    int** matrix2;
    int** matrix3;//to store result
    matrix1=(int**)malloc(sizeof(int*)*rows);
    for (int i=0;i<rows;i++)
    {
        matrix1[i]=(int*)malloc(sizeof(int)*cols);
    }
    matrix2=(int**)malloc(sizeof(int*)*rows);
    for (int i=0;i<rows;i++)
    {
        matrix2[i]=(int*)malloc(sizeof(int)*cols);
    }
    populateMatrices(matrix1,matrix2,rows,cols);
    matrix3=(int**)malloc(sizeof(int*)*rows);
    for (int i=0;i<rows;i++)
    {
        matrix3[i]=(int*)malloc(sizeof(int)*cols);
    }
    mulMatrices(matrix1, matrix2, matrix3, rows,cols);
    printResult(matrix3,rows,cols);
    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(matrix3[i]);
    }
    free(matrix1);
    free(matrix2);
    free(matrix3);
    return 0;
}
