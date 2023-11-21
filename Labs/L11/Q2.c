/*
Programmer name: Rumaisa Kashif
Date: 21/11/2023
Description: Program utlising structure to store and print car parts information
*/

#include <stdio.h>

struct parts{
	char snum[3];
	int year;
	char material[20];
	int quantity;
};


void engineParts(struct parts myParts[], int num)
{
	for (int i=0;i<num;i++)
	{
		if (myParts[i].snum[0]>='B' && myParts[i].snum[0]<='C' && myParts[i].snum[1]>='B' && myParts[i].snum[1]<='C' && myParts[i].snum[2]>='1' && myParts[i].snum[2]<='6')
		{
			printf("Serial num: %s\n", myParts[i].snum);
			printf("Year of Manufacture: %d\n", myParts[i].year);
			printf("Material: %s\n", myParts[i].material);
			printf("Quantity: %d\n", myParts[i].quantity);
		}
	}
}

int main()
{
	printf("enter number of parts: \n");
	int num;
	scanf("%d", &num);
	struct parts myParts[num];
	int i=0;
	while (i<num)
	{
		printf("enter serial number: \n");
		scanf("%s", myParts[i].snum);
		printf("enter year of manufacture: \n");
		scanf("%d", &myParts[i].year);
		printf("enter material: \n");
		scanf("%s", myParts[i].material);
		printf("enter quantity: \n");
		scanf("%d", &myParts[i].quantity);
		i++;
	}
	engineParts(myParts,num);
	
}
