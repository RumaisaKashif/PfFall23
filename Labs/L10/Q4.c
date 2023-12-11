/*
Programmer: Rumaisa Kashif
Desc: Develop a C program that takes a sentence as input and uses pointer arithmetic to reverse each word in the sentence while keeping the words in their original order. 
Print the modified sentence.
Q4
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void reverseWords(char* modifiedsentence)
{
   char* start=modifiedsentence;//initialise pointer to beginning of sentence
   char* end=modifiedsentence;//initialise pointer to beginning of sentence
   while (*end!='\0')
   {
        while (*end!=' ' && *end!='\0')
        {
            end++;//no need to use asterisk unless dealing with value, here we're moving the pointer 
        }
        char* wordstart=start;//important to use another pointer to retain start pointer
        char* wordend=end-1;//-1 because end has already been incremented to ' '.        if (*end==' ')
        while (wordstart<wordend)
        {
            //swap beginning letter with ending letter 
            char temp=*wordstart;
            *wordstart=*wordend;
            *wordend=temp;

            wordstart++;
            wordend--;
        }

        if (*end==' ')
        {
            start=++end;//move start pointer to next word if any
        }
        else
        {
            start=end;//move start pointer to null terminator
        }
   }
}

int main()
{
    char sentence[100];
    printf("Enter sentence to be modified:\n");
    scanf("%[^\n]s", sentence);
    int i=0;
    while(sentence[i]!='\0')
    {
        i++;
    }
    char* modifiedsent;
    modifiedsent=(char*)malloc(sizeof(char)*i+1);
    if (modifiedsent==NULL)
    {
        printf("memory allocation failed.\n");
        return 0;
    }
    strcpy(modifiedsent,sentence);
    reverseWords(modifiedsent);
    printf("Modified sentence: %s\n", modifiedsent);
    free(modifiedsent);
    return 0;
}//end main
