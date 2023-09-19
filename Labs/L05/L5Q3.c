#include <stdio.h>
#include <math.h>
//program to deliver deletion prompt
//Rumaisa Kashif 
//23K0744
//note to self: do not use "c" to indicate case "c", use 'c' i.e case 'c'

int main()
{
	printf("are you sure you wish to delete this object? select y/n \n");
	char o;
	scanf("%c", &o);
	char y;//not necessary to use
	char n;
	switch(o)
	{
		case 'y':
			printf("deletion successful");
			break;
		case 'n':
			printf("deletion unsuccessful");
			break;
		default:
			printf("choose valid option");
			break;
	}
}