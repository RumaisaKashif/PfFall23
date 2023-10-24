/*
Programmer: Rumaisa Kashif\
Date: 24/10/23
Description: use function for basic arithmetic operations
*/

#include <stdio.h>

void arOp(int a, int b, char c)
{
	int result;
	if (c=='+')
	{
		result=a+b;
	}
	else if (c=='-')
	{
		result=a-b;
	}
	else if (c=='*')
	{
		result=a*b;
	}
	else if (c=='/')
	{
		result=a/b;
	}
	printf("%d %c %d = %d\n", a, c, b, result);
}

int main()
{
	int a, b;
	char d;
	//taking input for the operands and operator from user
	printf("enter number 1: \n");
	scanf("%d", &a);
	printf("enter number 2: \n");
	scanf("%d", &b);
	printf("enter operator: \n");
	scanf(" %c", &d);
	//calling function
	arOp(a,b,d);
}
