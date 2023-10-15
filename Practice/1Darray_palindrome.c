//Programmer: Rumaisa Kashif
//Date: 12/10/23
//Desc: palindrome checker
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int len;
    printf("enter length of word:\n");
    scanf("%d", &len);
    char arr[len];
    printf("enter word:\n");
    for (int i=0;i<len;i++)
    {
        scanf(" %c", &arr[i]);
    }
    bool flag=true;
    for (int i=0;i<len/2;i++)
    {
        if (arr[i]!=arr[len-1-i])
        {
            flag=false;
        }
    }
    if (!flag)
    {
        printf("word is not a palindrome!\n");
    }
    else
    {
        printf("word is a plaindrome!\n");
    }
}//end main
