/*
Programmer: Rumaisa Kashif
Date: 6th December 2023
Q1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_SIZE 100

// Function prototypes
int **formMatrix(int n);
void readFileMatrix(FILE *fp, int **mat, int n);
void printMatrix(int **mat, int n);
int max(int **mat, int i, int j, int n);
int **getSubMatrix(int **mat, int n);

int **formMatrix(int n)
{
	int **mat = (int **)malloc(sizeof(int *) * n);
	int *block = (int *)malloc(sizeof(int) * n*n);

	for (int i=0; i<n; i++) 
  {
    mat[i] = block + i*n;
  }
	return mat;
}

void readFileMatrix(FILE *fp, int **mat, int n)
{
	char buffer[MAX_BUFFER_SIZE];
  
	for (int i=0; !feof(fp) && i<n; i++) 
  {
		fgets(buffer, MAX_BUFFER_SIZE, fp);
		buffer[strcspn(buffer, "\n")] = 0; 
    
		// Read across space separated values 
		char *num=strtok(buffer, " ");
		for (int j=0; num!=NULL && j<n; j++) 
    {
			mat[i][j]=atoi(num);

			num=strtok(NULL, " ");
		}
	}
} 

void printMatrix(int **mat, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%-3d ", mat[i][j]);
		}
		printf("\n\n");
	}
} 

int max(int **mat, int i, int j, int n)
{
	int maxval= 1<<31;

	// Checking for positions
	int check[]= {0, 0, 1, 0, 1, 1, 0, 1};

  for (int k=0; k<8; k+=2) 
  {
    int currenti= i+check[k];
    int currentj= j+check[k+1];

    if (mat[currenti][currentj]>maxval) 
    {
        maxval=mat[currenti][currentj];
    }
  }

  return maxval;
}

int **getSubMatrix(int **mat, int n) 
{	
	int **submat = formMatrix(n/2);

	for (int i=0; i<n; i+=2) 
  {
		for (int j=0; j<n; j+=2) 
    {
			// Assigning maximum value to sub matrix
			submat[i/2][j/2] = max(mat, i, j, n);
		}
	}

	return submat;
} 

int main()
{
  printf("Rumaisa Kashif\n23k-0744\n");
  int n;

  // User enters matrix dimensions
  printf("Enter matrix dimension (2, 4, or 8): ");
  scanf("%d", &n);

  while (!(n == 2 || n == 4 || n == 8))
  {
      printf("Incorrect dimension\nRe-enter: ");
      scanf("%d", &n);
  }

  // Get input file name from user
  char inputFileName[MAX_BUFFER_SIZE];
  printf("Enter input file name: ");
  scanf("%s", inputFileName);

  FILE *fptr = fopen(inputFileName, "r");
  if (fptr == NULL)
  {
      printf ("Error opening file.\n");
      return 0;
  }
  
	int **mat=formMatrix(n);
	readFileMatrix(fptr, mat, n);
	printMatrix(mat, n);

	int **submat = getSubMatrix(mat, n);
	printf("\nSubmatrix with maximum values:\n");
	printMatrix(submat, n/2);

  for (int i = 0; i < n; i++)
  {
      free(mat[i]);
  }
  free(mat);
  for (int i = 0; i < n / 2; i++)
  {
      free(submat[i]);
  }
  free(submat);
  fclose(fptr);
  
	return 0;
} //end main
