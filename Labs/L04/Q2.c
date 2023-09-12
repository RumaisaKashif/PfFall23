#include <stdio.h>
#include <math.h>
//programmer:Rumaisa Kashif
//date:12th September 2023
//Description: code for printing characters with a certain pattern B
//Related files:


int main() {
	int i,j,r;
	printf("enter number of rows to be printed as an integer greater than 0:\n");
	scanf("%d", &r);
	for (i=0; i<r; i++) {
		j=0;
		do { 
			printf("*");
			j=j+1;
		} while (j<r);
		printf("\n");
	}
}
	