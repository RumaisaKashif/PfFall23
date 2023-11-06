/*
Programmer: Rumaisa Kashif
Date: 5/11/2023
Description: 
Given following paragraph, write a program using any built-in string functions to perform following actions:
1. Display the no. of sentences in a given paragraph.
2. Display the word count per sentence. 
"Think 100 times before you take a decision, But once that decision is taken, stand by it as one man. With faith, discipline and selfless devotion to duty, there is nothing worthwhile that you cannot achieve."
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

void Sentence(char* str)
{
    int sentnum=0;
    int count=0;
    int index=0;
    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
        if (str[i]=='.')
        {
            index=i;
            sentnum++;
            if (sentnum==1)
            {
                 printf("number of words in sentence %d: %d\n",sentnum,count+1);//count+1 because the first if condition does not account for the last word
            }
            else
            {
                printf("number of words in sentence %d: %d\n",sentnum,count);
            }
            count=0;
        }
    }
    printf("number of sentences: %d\n", sentnum);
}

void wordCount(char* str)
{
    int c=0;
    char* found;
    while (1)
    {
        found=strchr(str,' ');
        if (found!=NULL)
        {
            c++;
            str=found+1;//move pointer to next position on string
        }
        else 
        {
            break;
        }
    }
    printf("number of words is: %d\n", c+1);
}

//how to display word count per sentence???

int main( )
{
    char str[]="Think 100 times before you take a decision, But once that decision is taken, stand by it as one man. With faith, discipline and selfless devotion to duty, there is nothing worthwhile that you cannot achieve.";
    wordCount(str);
    Sentence(str);
}
