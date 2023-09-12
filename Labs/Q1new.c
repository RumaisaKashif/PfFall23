#include <stdio.h>
#include <math.h>

int main () {
	int i,j,r;
	printf("program for simple pyramid\n");
	printf("how many rows of characters do you want:\n");
	scanf("%d", &r);
	for (i=1; i<=r; i++) {
		for (j=1; j<=i; j++) {
			printf("*");
		}
	printf("\n");
	}
} //end main
	