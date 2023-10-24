/*
Programmer: Rumaisa Kashif\
Date: 24/10/23
Description: use function to swap two integers
*/

#include <stdio.h>

void swapIntegers(int n, int m)
{
	int temp;
	temp=n;
	n=m;
	m=temp;
	printf("num 1= %d\nnum 2= %d\n", n, m);
}

int main()
{
	int n, m;
	//take input of numbers from user
	printf("enter num 1= \n");
	scanf("%d", &n);
	printf("enter num 2= \n");
	scanf("%d", &m);
	//call function
	swapIntegers(n,m);
}//end main
