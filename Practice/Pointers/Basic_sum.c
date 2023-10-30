/*
 Programmer: Rumaisa Kashif
 Date: 29/10/2023
 Description:
 Write a C program to print the sum of all elements in an array using one function and pointers
 */
#include <stdio.h>
#include <stdlib.h>

int arrSum(int arr[], int e)
{
    int a=0;
    int* sum=&a;
    for (int i=0;i<e;i++)
    {
        a+=arr[i];
    }
    return* sum;
}


int main()
{
    int e;
    printf("enter number of elements in the array: \n");
    scanf("%d", &e);
    int arr[e];
    printf("enter array elements: \n");
    for (int i=0;i<e;i++)
    {
        scanf("%d", &arr[i]);
    }
    int result= arrSum(arr, e);
    printf("sum of array elements is: %d\n", result);
}//end main
