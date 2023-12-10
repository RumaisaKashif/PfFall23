//Copy one string to another using recursion
#include <stdio.h>
#include <stdlib.h>

void copystring(char original[], char copy[], int len, int start)
{
    if (start==len)
    {
        return;
    }
    else
    {
        copy[start]=original[start];
        copystring(original,copy,len, start+1);
    }
}

int main()
{
    char org[20], copy[20];
    printf("enter string to be copied:\n");
    scanf("%s", org);
    int i=0;
    while (org[i]!='\0')
    {
        i++;
    }
    copystring(org,copy,i, 0);
    printf("Origina: %s\n", org);
    printf("Copy: %s", copy);
}
