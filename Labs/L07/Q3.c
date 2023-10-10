//Programer: Rumaisa Kashif
//Desc: print sum of digits of number
//Date: 10/10/23

#include <stdio.h>
int main()
{
	int num;
	printf("enter number:\n");
	scanf("%d", &num);
	int n=num;
	int m;
	int sum=0;
	do
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	} while (n!=0);
	printf("sum of digits of number is:%d", sum);
}

