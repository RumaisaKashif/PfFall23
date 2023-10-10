#include <stdio.h>

int main()
{
	int num, div;
	int q=0;
	printf("enter number:\n");
	scanf("%d", &num);
	int n=num;
	printf("enter divisor:\n");
	scanf("%d", &div);
	while (n>=div)
	{
		n=n-div;
		q=q+1;
	}
	printf("the quotient is:%d\n", q);
}
