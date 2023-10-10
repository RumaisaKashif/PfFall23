#include <stdio.h>

int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int num;
	printf("enter number by which you want to rotate array elements:\n");
	scanf("%d", &num);
	int i;
	for (i=0; i<7-num; i++)
	{
		arr[i]=arr[i+num];
	}
	int c=num-1;
	for (int j=7-num; j<7; j++)
	{
		if(c<num)
		{
				arr[j]=num-c;
		}
		c-=1;
	}
	int n;
	for (n=0; n<7;n++)
	{
		printf("%d", arr[n]);
	}	
}
