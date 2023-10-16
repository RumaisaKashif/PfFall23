//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: Find whether a user-entered number is palindrome or not.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    printf("enter number: \n");
    scanf("%d", &num);
    int n=num;
    int mul=10;
    int c=0;//note
    while (n!=0)
    {
        n=n/10;
        c++;
    }
    int r=num;
    int arr[c];
    for (int i=0;i<c;i++)
    {
        arr[i]=r%mul;
        r=r/mul;
    }
    bool flag=true;
    for (int i=0;i<c/2;i++)
    {
        if (arr[i]!=arr[c-i-1])
        {
            flag=false;
            break;
        }
    }
    if (!flag)
    {
        printf("is not a palindrome\n");
    }
    else
    {
        printf("is a palindrome\n");
    }
}
