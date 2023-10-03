//Rumaisa Kashif
//23k0744
//program to find out if a user entered number is a perfect number or not
#include <stdio.h>
#include <math.h>

int main()
{
	int num,i;
	printf("enter number:\n");
	scanf("%d", &num);
	int c=0;
	for (i=1; i<=(num/2); i++)
	{
		if (num%i==0)
		{
			c=c+i;
		}
	}
	if (c==num)
	{
		printf("this is a perfect number\n");
	}
	else 
	{
		printf("this is not a perfect number\n");
	}
}//end main
