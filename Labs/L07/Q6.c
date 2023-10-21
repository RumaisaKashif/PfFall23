/*
 Programmer: Rumaisa Kashif
 Date: 18/10/23
 Desc: determining frequency of each element in an array
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int size;
    printf("enter size of array: \n");
    scanf("%d", &size);
    int arr[size];
    int arr2[size];
    int count=0;
    for (int i=0;i<size;i++)
    {
        printf("enter value no. %d\n", i+1);
        scanf(" %d", &arr[i]);
    }
    for (int i=0;i<size;i++)
    {
        arr2[i]=0;
    }
    for (int i=0;i<size;i++)
    {
        count=1;
        if (arr[i]!=-1)
        for (int j=0;j<size;j++)
        {
            if (arr[i]==arr[j] && i!=j)
            {
                count++;
                arr[j]=-1;
            }
        }
        arr2[i]=count;
    }
    for (int i=0;i<size;i++)
    {
        if (arr[i]!=-1)
        printf("frequency of %d= %d\n", arr[i], arr2[i]);
    }
}
