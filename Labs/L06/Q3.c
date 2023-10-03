//Rumaisa Kashif
//23K0744
//program to find gcd and lcm
#include <stdio.h>
#include <math.h>

int main()
{
	int num1,num2, a,b,c,gcd;
	printf("enter number 1:\n");
	scanf("%d", &num1);
	printf("enter number 2:\n");
	scanf("%d", &num2);
	a=num1;
	b=num2;
	if (num1<num2)
	{
		while (b!=0)
		{
			c=b;
			b=b%a;
			a=c;
		}
		gcd=a;
	}
	else 
	{
		while (a!=0)
		{
			c=a;
			a=a%b;
			b=c;
		}
		gcd=b;
	}
	printf("\nThe gcd of the numbers is:%d", gcd);
	//now finding lcm
	int lcm;
	lcm=(num1>num2)? num1:num2;//using ternary operator to declare one number as the highest of the two
	while (1)
	{
		if (lcm%num1==0 && lcm%num2==0)
		{
			printf("\nThe lcm is:%d\n", lcm);
			break;
		}
		++lcm;//increment the highest number by one until lcm obtained
	}
}
