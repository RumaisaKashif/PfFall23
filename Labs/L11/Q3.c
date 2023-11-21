/*
Programmer name: Rumaisa Kashif
Date: 21/11/2023
Description: Program utlising structure to compare two dates
*/

#include <stdio.h>

struct Date{
	int day;
	int month;
	int year;
};

int main()
{
	struct Date Date1;
		printf("enter day: \n");
		scanf("%d", &Date1.day);
		printf("enter month: \n");
		scanf("%d", &Date1.month);
		printf("enter year: \n");
		scanf("%d", &Date1.year);
	
	struct Date Date2;
		printf("enter day: \n");
		scanf("%d", &Date2.day);
		printf("enter month: \n");
		scanf("%d", &Date2.month);
		printf("enter year: \n");
		scanf("%d", &Date2.year);
	
	if (Date1.day==Date2.day && Date1.month==Date2.month && Date1.year==Date2.year)
	{
		printf("Dates are equal!\n");
	}
	else 
	{
		printf("Dates are not equal!\n");
	}
	
	return 0;
		
}//end main
