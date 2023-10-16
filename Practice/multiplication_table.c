//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: print a multiplication table till a user-specified number
#include <stdio.h>

int main()
{
    int num;
    printf("enter number till which you want a multiplication table:\n");
    scanf("%d", &num);
    printf("A multiplication table:\n");
    printf("\t");
    for (int i=1;i<=num;i++)
    {
        printf("\t%d", i);
    }
    printf("\n\n");
    int mul;
    for (int i=1;i<=num;i++)
    {
        printf("\t%d", i);
        mul=1;
        for (int j=1;j<=num;j++)
        {
            mul=i*j;
            printf("\t%d", mul);
        }
        printf("\n");
    }
}
