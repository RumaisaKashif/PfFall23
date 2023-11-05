/*
Programmer: Rumaisa Kashif
Date: 5/11/2023
Description: take input fron user for text and pattern to compare it with. See if the pattern exists within the text string. Print match found if it does.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main( )
{
    int p,t;
    printf("enter size of pattern\n");
    scanf("%d", &p);
    char pat[p];
    printf("enter pattern:\n");
    scanf("%s", pat);
    printf("enter size of text\n");
    scanf("%d", &t);
    char text[t];
    printf("enter text:\n");
    scanf("%s",text);
    int c=0;
    for (int i=0;i<t;i++)
    {
        if (text[i]==pat[c])
        {
            if (c==p-1)
            {
                break;
            }
            if (text[i+1]==pat[c+1])
            {
               c++; 
            }
            else
            {
                c=0;
            }
        }
    }
    if (c==p-1)
    {
        printf("match found!\n");
    }
    else 
    {
        printf("match not found!\n");
    }
}
