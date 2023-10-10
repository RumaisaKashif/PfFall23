//Programmer: Rumaisa Kashif
//Desc: check for symmetric matrix
//date: 10/10/10

#include <stdio.h>
int main()
{
	int arr[3][3];
	for (int i=0; i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("enter value for array:[%d] [%d]", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	int is_Symmetric=0;
	for (int i=0; i<3;i++)
	{
		for (int j=0; j<3;j++)
		{
			if (arr[i][j]!=arr[j][i])
			{
				is_Symmetric=1;
				break;
			}
		}
	}
	if (is_Symmetric==0)
	{
		printf("matrix is symmetric\n");
	}
	else 
	{
		printf("matrix is not symmetric\n");
	}
}
