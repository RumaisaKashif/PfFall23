/*
 Programmer: Rumaisa Kashif
 Date: 29/10/2023
 Description:
 Write a C program to find the max value of an integral data set by using a pointer which points to the max value
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maxNum(int arr[], int size)
{
    int highest=-9999;
    int* ptr=&highest;
    for (int i=0;i<size;i++)
    {
        if (arr[i]>highest)
        {
            highest=arr[i];
        }
    }
    printf("the highest value of integral data set is: %d\n",* ptr);
}

int main()
{
    int n;
    printf("enter number of integers: \n");
    scanf("%d", &n);
    int arr[n];
    printf("enter integers: \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    maxNum(arr, n);
}
