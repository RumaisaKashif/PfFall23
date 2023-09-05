#include <stdio.h>

int main() {
	printf("lets find the volume of Ahmed's container\n");
	printf("lets take dimensions\n");
	int h;
	int l;
	int w;
	int v;
	printf("enter height:");
	scanf("%d", &h);
	printf("enter width:");
	scanf("%d", &w);
	printf("enter length:");
	scanf("%d", &l);
	v=h*l*w;
	printf("volume of Ahmed's container is %d" , v);
	return 1;

}
