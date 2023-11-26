/*
Programmer: Rumaisa Kashif
Date: 26/11/23
Description: Recursion: Reverse string
*/
#include <stdio.h>
#include <stdlib.h>

void reverseString(char str[], int start, int end) {
    if (start >= end) 
    {
        return;
    }
    else 
    {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Recursive call for the remaining substring
        reverseString(str, start + 1, end - 1);
    }
}

int main() 
{
    char string[50];
    printf("Enter string:\n");
    scanf("%[^\n]s", string);
    int i = 0;
    while (string[i] != '\0') 
    {
        i++;
    }
    reverseString(string, 0, i - 1);
    printf("Reversed string: %s", string);
    return 0;
}

