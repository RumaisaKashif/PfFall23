#include <stdio.h>
#include <math.h>

int main() {
	printf("this is a program to use the appropriate greeting\n");
	printf("enter hour of the day in 24hour format:\n");
	int h;
	scanf("%d", &h);
	if (h>=5 && h<=11) {
		printf("good morning!");
	}
	else if (h>=12 && h<=18){
		printf("good evening");
	}
	else if (h>18 && h<=24){
		printf("good night");
	}
	return 1;
}
