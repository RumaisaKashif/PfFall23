//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: Find whether a user entered number classifies as a perfect number or not.
#include <stdio.h>
#include <stdbool.h>


bool isPerfect(int n)
{
    int arr[n/2];
    int c=0;
    for (int i=1;i<=n/2;i++)
    {
        if (n%i==0)
        {
            arr[c]=i;
            c++;
        }
    }
    int sum=0;
    for (int i=0;i<c;i++)
    {
        sum+=arr[i];
    }
    if (sum==n)
    {
        return true;
    }
    else//else statement is necessary for function to work
    {
        return false;
    }
}

int main()
{
    int num;
    printf("enter number: \n");
    scanf(" %d",&num);
    if (isPerfect(num))
    {
        printf("%d is a perfect number!\n", num);
    }
    else
    {
        printf("%d is not a perfect number!\n", num);
    }
}
