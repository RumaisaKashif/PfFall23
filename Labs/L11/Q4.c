/*
Programmer name: Rumaisa Kashif
Date: 21/11/2023
Description: Program utlising structure to store and print employee data and modified employee data
*/

#include <stdio.h>

struct employeeData{
	char name[20];
	int salary;
	int hoursperday;
};

int main()
{
	struct employeeData employees[10];
	int i=0;
	while (i<10)
	{
		printf("enter name: \n");
		scanf("%s", employees[i].name);
		printf("enter salary: \n");
		scanf("%d", employees[i].salary);
		printf("enter hours worked per day: \n");
		scanf("%d", employees[i].hoursperday);
		i++;
	}
	
	int inc=0;
	for (int i=0;i<10;i++)
	{
		if (employees[i].hoursperday==8)
		{
			inc=50;
		}
		else if (employees[i].hoursperday==10)
		{
			inc=100;
		}
		else if (employees[i].hoursperday>=12)
		{
			inc=150;
		}
		employees[i].salary+=inc;
	}
	
	for (int i=0;i<10;i++)
	{
		printf("name: %s\n", employees[i].name);
		printf("salary: %xd\n", employees[i].salary);
		printf("hours worked per day: %d\n",employees[i].hoursperday );
	}
}
