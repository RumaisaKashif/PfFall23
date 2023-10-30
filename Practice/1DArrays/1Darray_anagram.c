//Programmer: Rumaisa Kashif
//Date: 15/10/23
//Desc: anagram checker
#include <stdio.h>
int main()
{
    int l1,l2;
    printf("enter word length (1): \n");
    scanf("%d", &l1);
    printf("enter word length (2): \n");
    scanf("%d", &l2);
    if (l1!=l2)
    {
        printf("cannot be annagram!\n");
        return 1;
    }
    char arr1[l1];
    char arr2[l2];
    printf("enter alphabets of word 1:\n");
    for (int i=0;i<l1;i++)
    {
        scanf(" %c", &arr1[i]);//add space before format specifier to skip whitespace char
    }
    printf("enter alphabets of word 2:\n");
    for (int i=0;i<l2;i++)
    {
        scanf(" %c", &arr2[i]);
    }
    int c=0;
    for (int i=0;i<l1;i++)
    {
        for (int j=0;j<l2;j++)
        {
            if (arr1[i]==arr2[j] && arr1[i]!=-1)
            {
                arr2[j]=-1;
                c+=1;
            }
        }
    }
    if (c==l1)
    {
        printf("words are anagrams!\n");
    }
    else 
    {
        printf("Words are not anagrams!\n");
    }
}//end main
