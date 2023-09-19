#include <stdio.h>
#include <math.h>

int main() {
	printf("program to find whether a number is a multiple of 3 or not\n");
	int n;
	printf("enter number:\n");
	scanf("%d", &n);
	if(n%3==0) {
		printf("number is a multiple of 3");
	}
	else {
		printf("number is not a multiple of 3");
	}
}
