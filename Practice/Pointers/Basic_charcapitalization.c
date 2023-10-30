/*
 Programmer: Rumaisa Kashif
 Date: 29/10/2023
 Description:
 Write a C program that asks for 2 lowercase characters. Pass the two entered characters, using pointers, to a function named capit(). The capit() function should capitalize the two letters and return the capitalised values to the calling function through its pointer arguments.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void capit(char* chr1, char* chr2)
{
    * chr1-=32;
    * chr2-=32;
}

int main()
{
    char n,m;
    printf("enter lowercase character no. 1: \n");
    scanf(" %c", &n);
    printf("enter lowercase character no. 2: \n");
    scanf(" %c", &m);
    printf("letters entered:\n%c\n%c\n", n,m);
    //code only runs for lowercase characters entered
    if (m>='a' && n>='a' && m<='z' && n<='z')
    {
        char* ptr1=&n;
        char* ptr2=&m;
        capit(ptr1, ptr2);
        printf("Capitalised letters:\n%c\n%c\n", n,m);
    }
    else
    {
        printf("error, enter lowercase letters only!\n");
        return 0;
    }
}//end main
