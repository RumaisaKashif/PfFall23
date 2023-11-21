/*
Programmer name: Rumaisa Kashif
Date: 21/11/2023
Description: Program utlising structure to store and print student information
*/

#include <stdio.h>
#include <string.h>


//define structure for structure
struct studentInfo
{
	char rollNum[8];
	char name[20];
	char department[20];
	char course[20];
	int joined[4];
};

int main()
{
	//store information in structure
	struct studentInfo myInfo[num];
	int i=0;
		while (i<num)
		{
			printf("enter roll number: ");
			scanf("%s", myInfo[i].rollNum);
			printf("enter name: ");
			scanf("%s", myInfo[i].name);
			printf("enter department: ");
			scanf("%s", myInfo[i].department);
			printf("enter course: ");
			scanf("%s", myInfo[i].course);
			printf("enter year joined: ");
			scanf("%d", &myInfo[i].joined);
			i++;
		}
		
	printf("Choose option:\n1. Print information of students who joined in a particular year\n2. Print information of student with a particular roll number\n");
	int op;
	scanf("%d", &op);
	
	//Print information of students who joined in a particular year
	if (op==1)
	{
		printf("enter year: \n");
		int y;
		scanf("%d", &y);
		i=0;
			while (i<num)
			{
				if (myInfo[i].joined[0]==y)
				{
					puts(myInfo[i].rollNum);
					puts(myInfo[i].name);
					puts(myInfo[i].department);
					puts(myInfo[i].course);
					printf("%d\n", myInfo[i].joined[0]);
				}
				i++;
			}
	}
	
	//Print information of a student with a particular roll number
	if (op==2)
	{
		printf("enter roll number: \n");
		char r[8];
		scanf("%s", r);
		i=0;
			while (i<num)
			{
				if (strcmp(myInfo[i].rollNum,r)==0)
				{
					printf("%s \n", myInfo[i].rollNum);
					printf("%s \n", myInfo[i].name);
					printf("%s \n", myInfo[i].department);
					printf("%s \n", myInfo[i].course);
					printf("%d \n", &myInfo[i].joined[0]);
					break;
				}
				i++;
			}
	}
	
	else if (op!=1 && op!=2)
	{
		printf("Invalid option.\n");
	}
	return 0;
}//end main
