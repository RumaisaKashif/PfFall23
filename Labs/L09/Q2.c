/*
 Programmer: Rumaisa Kashif
 Date: 31/10/23
 Description: Q2
 */

#include <stdio.h>

void reverse(int* arr, int size)
{
    for (int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}

int main()
{
    int arr[10];
    int size=10;
    printf("please enter 10 elements into the array:\n");
    for (int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<10;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    reverse(&arr, size);
    for (int i=0;i<10;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}//end main
