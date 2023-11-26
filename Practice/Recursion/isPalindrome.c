/*
Programmer: Rumaisa Kashif
Date: 26/11/23
Description: Recursion: Palindrome
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(char str[], int start, int end) 
{
    //returns true once end=-1 after decrementing
    if (start >= end) 
    {
        return true;
    }
    else 
    {
        if (str[start]==str[end])
        {
            //Recursive call for the remaining substring.
            isPalindrome(str, start + 1, end - 1);  
        }
        else
        {
            return false;
        }
    }
}

int main() 
{
    char string[50];
    printf("Enter word:\n");
    scanf("%s", string);
    int i = 0;
    while (string[i] != '\0') 
    {
        i++;
    }
    if (!isPalindrome(string,0,i-1))
    {
        printf("This word is not a palindrome.\n");
    }
    else
    {
        printf("This word is a palindrome.\n");
    }
}

