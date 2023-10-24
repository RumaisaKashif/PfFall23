/*
Programmer: Rumaisa Kashif\
Date: 24/10/23
Description: password length validation
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void pwd(char str[15])
{
	char stored[]="Secure123";
	int i=0;
	int count=1;
	while (str[i]!='\0')
	{
		count++;
		i++;
	}
	bool flag=true;
	if (count>=8)
	{
		for (int i=0;i<8;i++)
		{
			if (str[i]!=stored[i])
			{
				flag=false;
				break;
			}
		}
		if (!flag)
		{
			printf("Login failed. Incorrect password!\n");
		}
		else if (flag)
		{
			printf("Login successful. Welcome!\n");
		}
	}
	else 
	{
		printf("Invalid Password. Enter a password which has atleast 8 characters!\n");
	}
}

int main()
{
	char pass[15];
	puts("enter password:");
	gets(pass);
	pwd(pass);
}
