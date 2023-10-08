//Program to print unique elements of an array

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[10]={1,2,3,1,1,2,5,6,6,4};
    int i, j;
    for (i=0;i<10;i++)
    {
        bool matchfound=false;
        for (j=0;j<10;j++)
        {
            if (arr[i]==arr[j] && i!=j)
            {
                matchfound=true;
                break;
            }
        }
        if (matchfound==false)
        {
            printf("%d ", arr[i]);
        }
    }
}
