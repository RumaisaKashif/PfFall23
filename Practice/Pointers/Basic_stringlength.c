/*
 Programmer: Rumaisa Kashif
 Date: 29/10/2023
 Description:
 Write a C program to print the length of a string using pointers
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringLength(char arr[100])
{
    char* ptr=arr;
    int count=0;
    for (int i=0;i<100;i++)
    {
        if (* ptr!='\0')
        {
            ptr++;
            count++;
        }
    }
    printf("string length is: %d\n", count);
}

int main()
{
    char str[100];
    printf("enter string: \n");
    scanf("%[^\n]s", str);
    stringLength(str);
}//end main
