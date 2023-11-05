/*
Programmer: Rumaisa Kashif
Date: 5/11/23
Desc: convert first and last letter of each word to uppercase using function
*/

#include <stdio.h>
#include <string.h>

void toggleCases(char str[],int size)
{
    if (str[0]>='a' && str[0]<='z')
    {
        str[0]-=32;
    }
    for (int i=1;i<size;i++)
    {
        if (str[i]==' ' && str[i-1]!=' ')
        {
            if (str[i-1]>='a' && str[i-1]<='z')
            {
                str[i-1]=str[i-1]-32;
            }
            if (str[i+1]>='a' && str[i+1]<='z')
            {
                str[i+1]=str[i+1]-32;
            }
        }
        if (str[i]=='.')
        {
            if (str[i-1]>='a' && str[i-1]<='z'){
                str[i-1]=str[i-1]-32;
            }
        }
        else if (str[i]=='?')
        {
            if (str[i-1]>='a' && str[i-1]<='z'){
                str[i-1]=str[i-1]-32;
            }
        }
        else if (str[i]=='!')
        {
            if (str[i-1]>='a' && str[i-1]<='z'){
                str[i-1]=str[i-1]-32;
            }
        }
    }
    for (int i=0;i<size;i++)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[25];
    printf("enter string of less than 26 words:\n");
    scanf("%[^\n]s", str);
    int i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    if (i>25)
    {
        printf("string too long!\n");
        return 0;
    }
    toggleCases(str,i);
    // char a='a'-32;
}
