/*
 Programmer: Rumaisa Kashif
 Date: 29/10/2023
 Description: 
 Take a linear array of characters passed as a string, write a function to count all words in that array and print a version in which the first letter of each word is capitalised, then form another function which deletes any punctuation marks and spaces from the modified array
 */

#include <stdio.h>
#include <string.h>

int WordCap(char arr[], int size)
{
    int i=0;///note: don't redeclare i henceforth
    int count=1;
    if (size>0)
    {
        if (arr[0]>='a' && arr[0]<='z')
        {
            arr[0]-= 32;//convert to upper case as per ASCII
        }
    }
    for (i=1;i<size;i++)
    {
        if (arr[i]==' ')
        {
            count++;
            //check if char on next index lies in the string, alternatively use if (i+1 <size)
            if (arr[i+1]!='\0' && (arr[i+1]>='a' && arr[i+1]<='z'))
            {
                arr[i+1]=arr[i+1]-32;//convert to uppercase
            }
        }
    }
    for (i=0;i<size;i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
    return count;
}

void DelPunctuation(char arr[], int size)
{
    int i=0;
    char arr2[size];
    int index=0;
    for (i=0;i<size;i++)
    {
        if (arr[i+1]!='\0')
        {
            if (arr[i]==' ' || arr[i]==',' || arr[i]=='.' ||arr[i]=='?')
            {
                continue;
            }
            else
            {
                arr2[index++]=arr[i];
            }
        }
    }
    for (i=0;i<index;i++)
    {
        printf("%c", arr2[i]);
    }
    printf("\n");
}

int main()
{
    char arr[]="Hello, this is rumaisa.";
    int size= strlen(arr);
    int count= WordCap(arr, size);
    printf("number of words are: %d\n", count);
    DelPunctuation(arr, size);
}
