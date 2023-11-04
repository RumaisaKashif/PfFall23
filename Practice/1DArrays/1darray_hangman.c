/*
 Programmer: Rumaisa Kashif
 Date: 4/10/2023
 Desc: Hangman-basic
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() 
{
    char word[20];
    printf("enter word:\n");
    scanf("%s", word);
    int i=0;
//    alternatively use strlen() function
//    printf("%d", strlen(word));
    while (word[i]!='\0')
    {
        i++;
    }
    
    char dash[i];
    for (int j=0;j<i;j++)
    {
        dash[j]='-';
    }
    for (int j=0;j<i;j++)
    {
        printf("%c\t", dash[j]);
    }
    printf("\n");
    bool wordFound=false;
    while (!wordFound)
    {
        char userguess;
        printf("enter character you have guessed:\n");
        scanf(" %c", &userguess);
        for (int j=0;j<i;j++)
        {
            if (userguess==word[j])
            {
                dash[j]=userguess;
            }
        }
        for (int j=0;j<i;j++)
        {
            printf("%c\t", dash[j]);
        }
        printf("\n");
        
        int c=0;
        for (int m=0;m<i;m++)
        {
            if (dash[m]!='-')
            {
                c++;
            }
        }
        if (c==i)
        {
            wordFound=true;
        }
    }
    printf("Congratulations! You guessed the word: %s\n", word);
}//end main
