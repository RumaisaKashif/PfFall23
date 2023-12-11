
/*
Programmer: Rumaisa Kashif
Desc: 
Create a C program that dynamically allocates memory for a 2D array of integers. 
Write a function that accepts a pointer to a pointer to an integer and fills the 2D array with consecutive prime numbers.
Q3-DMA
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void populatePrime(int** matrix, int* primearr, int rows, int cols)
{
    int l=0;
    for (int k=2;l<rows*cols;k++)
    {
        int isPrime = 1;
        for (int m=2;m<=sqrt(k);m++)           
        {                    
            if (k!=m && k%m==0)
            {
                isPrime=0;
                break;
            }
        } 
        if(isPrime)
        {
            primearr[l++]=k;
        }   
    }
    int n=0;
    while (n<rows*cols)
    {
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                matrix[i][j]=primearr[n++];
            }
        }
    }
    // printf("primes:\n");
    // for (int i=0;i<rows*cols;i++)
    // {
    //     printf("%d", primearr[i]);
    // }
    // printf("\n");
}

void printResult(int** matrix,int rows,int cols)
{
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows=2;
    int cols=2;
    int** matrix;
    int* primearr;
    matrix=(int**)malloc(sizeof(int*)*rows);
    for (int i=0;i<rows;i++)
    {
        matrix[i]=(int*)malloc(sizeof(int)*cols);
    }
    primearr=(int*)malloc(sizeof(int)*rows*cols);
    populatePrime(matrix,primearr,rows,cols);
    printResult(matrix,rows,cols);

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(primearr);
    return 0;
}
