#include <stdio.h>
#include <math.h>

int main() {
	printf("lets find the hypotenuse of a right angled triangle with sides a,b\n");
	printf("first enter the magnitudes of the other two sides a and b\n");
	int a;
	printf("enter dimensions of adjacent:");
	scanf("%d", &a);
	int b;
	printf("enter dimensions of base:");
	scanf("%d", &b);
	int sum;
	sum=a*a+b*b;
	int h;
	h=sqrt(sum);
	printf("the measure of the hypotenuse is: %d", h);
	return 1;
}
	