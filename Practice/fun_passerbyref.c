/*
decription: using passing by reference in functions
*/

#include <stdio.h>

void sqr(int a)
{
	a=a*a;
	printf("%d\n", a);
}

//passing by reference
void sqr2(int &a)//a becomes a*a and this is the new value stored at the address of a
{
	a=a*a;
	printf("%d\n", a);
}

int main()
{
	int i;
	i=100;
	sqr(i);
	printf("%d\n", i);
	sqr2(i);
	printf("%d\n", i);
}
