/*
Programmer: Rumaisa Kashif
Description: 
Q5-DMA
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void transformArray(int** arr, int rows, int cols);
int** allocateSingleMallocArray(int rows, int cols);
int** allocateMultipleMallocsArray(int rows, int cols);
void freeMemory(int** arr, int rows);

void transformArray(int** arr, int rows, int cols) 
{
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr[i][j] = (arr[i][j]*3)/2;
}

int** allocateSingleMallocArray(int rows, int cols) 
{
    int** arr = (int**)malloc(rows * sizeof(int*));
    if (!arr) 
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    arr[0] = (int*)malloc(rows * cols * sizeof(int));
    if (!arr[0]) 
    {
        fprintf(stderr, "Memory allocation failed.\n");
        free(arr);
        exit(EXIT_FAILURE);
    }

    for (int i=1; i<rows; i++)
        arr[i] = arr[0] + i * cols;

    return arr;
}

int** allocateMultipleMallocsArray(int rows, int cols) 
{
    int** arr = (int**)malloc(rows * sizeof(int*));
    if (!arr) 
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    for (int i=0; i<rows; i++) 
    {
        arr[i] = (int*)malloc(cols * sizeof(int));
        if (!arr[i]) 
        {
            fprintf(stderr, "Memory allocation failed.\n");
            for (int j=0; j<i; j++)
                free(arr[j]);
            free(arr);
            exit(EXIT_FAILURE);
        }
    }
    return arr;
}

void freeMemory(int** arr, int rows) 
{
    for (int i=0; i< ows; i++)
        free(arr[i]);
    free(arr);
}

int main() 
{
    int testSizes[3][2] = {{100, 100}, {500, 500}, {800, 800}};

    for (int testIndex = 0; testIndex < 3; testIndex++) 
    {
        int numRows = testSizes[testIndex][0];
        int numCols = testSizes[testIndex][1];

        // Allocate array with single malloc
        int** singleMallocArray = allocateSingleMallocArray(numRows, numCols);

        // Allocate array with multiple mallocs
        int** multipleMallocsArray = allocateMultipleMallocsArray(numRows, numCols);

        // Fill arrays with data
        for (int i = 0; i < numRows; i++)
            for (int j = 0; j < numCols; j++)
                singleMallocArray[i][j] = multipleMallocsArray[i][j] = rand() % 100;

        // Measure time for transformation with single malloc
        clock_t startTime = clock();
        transformArray(singleMallocArray, numRows, numCols);
        clock_t endTime = clock();
        double elapsedSingleMalloc = ((double)(endTime - startTime)) / CLOCKS_PER_SEC;

        // Measure time for transformation with multiple mallocs
        startTime = clock();
        transformArray(multipleMallocsArray, numRows, numCols);
        endTime = clock();
        double elapsedMultipleMallocs = ((double)(endTime - startTime)) / CLOCKS_PER_SEC;

        printf("Array size: %d x %d\n", numRows, numCols);
        printf("Time for single malloc: %f seconds\n", elapsedSingleMalloc);
        printf("Time for multiple mallocs: %f seconds\n", elapsedMultipleMallocs);

        // Free allocated memory
        freeMemory(singleMallocArray, numRows);
        freeMemory(multipleMallocsArray, numRows);

        printf("\n");
    }
    return 0;
}
