//Programmer: Rumaisa Kashif
//Date: 15/10/23
//Desc: Given a sorted array and a number x, find the pair in array whose sum is closest to x
#include <stdio.h>

int main()
{
    int x, num;
    printf("enter x: \n");
    scanf("%d", &x);
    printf("enter number of elements in array:\n");
    scanf(" %d", &num);
    int arr[num];
    printf("enter elements in sorted order!\n");
    for (int i=0;i<num;i++)
    {
        printf("enter value no. %d: \n", i+1);
        scanf(" %d", &arr[i]);
    }
    int arr2[num-1];
    int j=0;
    int lowest=999999;
    for (int i=0;i<num-1;i++)
    {
        arr2[i]=arr[j]+arr[j+1];
        j++;
    }
    int arr3[num-1];
    for (int i=0;i<num-1;i++)
    {
        if (x>=arr2[i])
        {
            arr3[i]=x-arr2[i];
        }
        if (x<arr2[i])
        {
            arr3[i]=arr2[i]-x;
        }
    }
    int c=0;
    for (int i=0;i<num-1;i++)
    {
        if (arr3[i]<lowest)
        {
            lowest=arr3[i];
            c++;
        }
    }
    printf("the pair whose sum is closest to %d is (%d,%d)\n",x,arr[c-1],arr[c]);
}
