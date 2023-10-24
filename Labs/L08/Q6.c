/*
Programmer: Rumaisa Kashif\
Date: 24/10/23
Description: implement a function to find sum, maximum and minimum values of an array
*/

#include <stdio.h>

void processArray(int arr[], int n)
{
	int sum=0;
	int min=99999;
	int max=-99999;
	int i=0;
	while (i<n)
	{
		sum+=arr[i];
		i++;
	}
	for (int i=0;i<n;i++)//while loop does not work here
	{
		if (max<arr[i])
		{
			max=arr[i];
		}
		i++;
	}	
	for (int i=0;i<n;i++)//while loop does not work here
	{
		if (min>arr[i])
		{
			min=arr[i];
		}
		i++;
	}
	printf("Array Sum: %d\nMaximum Value: %d\nMinimum Value: %d\n", sum, max, min);
}

int main()
{
	int n;
	printf("enter size of array: \n");
	scanf(" %d", &n);
	int arr[n];
	printf("enter array elements: \n");
	for (int i=0; i<n;i++)
	{
		printf("please enter element number %d:\n", i+1);
		scanf(" %d", &arr[i]);
	}
	processArray(arr, n);
}
