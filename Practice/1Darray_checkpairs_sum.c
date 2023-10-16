//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: Take specified input from user (number) and check how many pairs of integers exist whose sum=specified number
#include <stdio.h>

int main()
{
    int array1[10];
    printf("enter 10 values which are not negative numbers.\n");
    for (int i=0;i<10;i++)
    {
        printf("enter number %d: ", i+1);
        scanf("%d", &array1[i]);
        if (array1[i]<0)
        {
            printf("you cannot enter a negative number!\n");
            return 0;
            break;
        }
    }
    int sp;
    printf("enter specified number: \n");
    scanf("%d", &sp);
    printf("array pairs whose sum is equal to %d\n", sp);
    int c=0;
    for (int i=0;i<10;i++)
    {
        if (array1[i]+array1[i+1]==sp)
        {
            printf("(%d,%d)\n", array1[i],array1[i+1]);
            c++;
        }
    }
    printf("number of pairs whose sum is equal to %d:%d\n",sp,c);
}
