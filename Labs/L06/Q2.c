//Rumaisa Kashif
//23K0744
//Program to print fibonacci sequence of numbers divisible by either 3,5 or 7 uptil 10000
#include <stdio.h>
#include <math.h>

int main()
{
	int a=0;
	int b=1;
	int sum;
	for (sum=0;sum<=10000; )
	{
		sum=a+b;
		if (sum%3==0 || sum%5==0 || sum%7==0)
		{
			printf("%d\t", sum);
		}
		a=b;
		b=sum;
	}
}//end main
