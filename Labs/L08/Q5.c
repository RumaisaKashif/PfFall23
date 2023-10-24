/*
Programmer: Rumaisa Kashif\
Date: 24/10/23
Description: implement a function to help user decide whether he/she should use their car
*/

#include <stdio.h>

void decideCarUsage(int n, int d)
{
	if (n%2==0 && d%2==0)
	{
		printf("you may use your car!\n");
		return 1;
	}
	else if (n%2==0 && d%2==1)
	{
		printf("you cannot use your car!\n");
		return 0;
	}
	if (n%2==1 && d%2==1)
	{
		printf("you may use your car!\n");
		return 1;
	}
	else if (n%2==1 && d%2==0)
	{
		printf("you cannot use your car!\n");
		return 0;
	}
}

int main()
{
	int num, day;
	printf("enter car number: \n");
	scanf("%d", &num);
	printf("enter day of the week as a number: \n");
	scanf("%d", &day);
	decideCarUsage(num, day);
}
