//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: print the following pattern
//t
//t    t
//t    t    t
//t    t    t    t
//t    t    t    t    t
//t    t    t    t    t
//t    t    t    t
//t    t    t
//t    t
//t
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    char ch;
    printf("enter height of pattern: \n");
    scanf("%d", &num);
    printf("enter character for pattern: \n");
    scanf(" %c", &ch);
    for (int i=0;i<num;i++)
    {
        for (int j=0;j<=i;j++)//if j<i, inner loop doesnt execute at i=0
        {
            printf("%c\t", ch);
        }
        printf("\n");
    }
    for (int i=num;i>0;i--)
    {
        for (int j=i;j>0;j--)
        {
            printf("%c\t", ch);
        }
        printf("\n");
    }
}
