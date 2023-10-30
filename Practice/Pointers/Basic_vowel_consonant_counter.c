/*
 Programmer: Rumaisa Kashif
 Date: 29/10/2023
 Description:
 Write a C program to count the number of vowels and consonants in a user-entered string with all lower case alphabets
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vowels(char str[], int e)
{
    int count=0;
    char* ptr=str;
    for (int i=0;i<e;i++)
    {
        if (* ptr=='a'||* ptr=='e'||* ptr=='o'||* ptr=='i'||* ptr=='u')
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int consonants(char str[], int e)
{
    int count=0;
    char* ptr2=str;
    for (int i=0;i<e;i++)
    {
        if (!(* ptr2=='a'||* ptr2=='e'||* ptr2=='o'||* ptr2=='i'||* ptr2=='u') && (* ptr2>='a' && * ptr2<='z'))
        {
            count++;
        }
        ptr2++;
    }
    return count;
}


int main()
{
    char str[100];
    printf("Enter string in lower case: \n");
    scanf("%[^\n]s", str);
    int i= 0,size=0;
    //obtain size of string
    while (str[i]!='\0')
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            printf("error, enter lower case string\n");
            return 0;
        }
        size++;
        i++;
    }
    int v= vowels(str, size);
    int c= consonants(str, size);
    printf("number of vowels in the string: %d\n",v);
    printf("number of consonants in the string: %d\n", c);
}//end main
