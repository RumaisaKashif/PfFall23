//Program to check type of characcter
//Rumaisa Kashif
//23K0744
#include <stdio.h>//use library to get functions

int main()
{
    printf("enter a character to check its type: \n");
    char r;//declaring variable data type
    scanf("%c", &r);//take input from user
    if (r>='a' && r<='z')
    {
        printf("this is a small alphabet\n");
    }
    else if (r>='A' && r<='Z')
    {
        printf("this is a capital alphabet\n");
    }
    else if (r>=0 && r<=9)
    {
        printf("this is a digit\n");
    }
    else
    {
        printf("this is a special character\n");
    }
}//end main
