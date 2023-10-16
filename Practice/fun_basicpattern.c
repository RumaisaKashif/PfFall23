//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: print the following pattern using a function
//*    *    *    *
//*    *    *    *
//*    *    *    *
//*    *    *    *
#include <stdio.h>

void Pattern(int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int h;
    printf("enter height of pattern: \n");
    scanf("%d", &h);
    Pattern(h);
}
