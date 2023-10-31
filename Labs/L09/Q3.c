/*
 Programmer: Rumaisa Kashif
 Date: 31/10/23
 Description: Q3
 */

#include <stdio.h>

void charArray(char* arr, int size)
{
    char* ptr=arr;
    for (int i=0;i<size;i++)
    {
        printf("%p\t", ptr);
        ptr++;
    }
    printf("\n");
    char* ptr2=arr;
    for (int i=0;i<size;i++)
    {
        printf("%c\t", *ptr2);
        ptr2++;
    }
    printf("\n\n");
}

void intArray(int* arr, int size)
{
    int* ptr=arr;
    for (int i=0;i<size;i++)
    {
        printf("%p\t", ptr);
        ptr++;
    }
    printf("\n");
    int* ptr2=arr;
    for (int i=0;i<size;i++)
    {
        printf("%d\t", *ptr2);
        ptr2++;
    }
    printf("\n\n");
}

void longintArray(long long int* arr, int size)
{
    long long int* ptr=arr;
    for (int i=0;i<size;i++)
    {
        printf("%p\t", ptr);
        ptr++;
    }
    printf("\n");
    long long int* ptr2=arr;
    for (int i=0;i<size;i++)
    {
        printf("%lld\t", *ptr2);
        ptr2++;
    }
    printf("\n\n");
}

int main()
{
    int size1,size2,size3;
    printf("enter size of character array: \n");
    scanf("%d", &size1);
    printf("enter size of integer array: \n");
    scanf("%d", &size2);
    printf("enter size of long long integer array: \n");
    scanf("%d", &size3);
    char arr1[size1];
    int arr2[size2];
    long long int arr3[size3];
    printf("\nenter elements into character array:\n");
    for (int i=0;i<size1;i++)
    {
        scanf(" %c",&arr1[i]);
    }
    printf("\nenter elements into integer array:\n");
    for (int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("\nenter elements into long integer array:\n");
    for (int i=0;i<size2;i++)
    {
        scanf("%lld",&arr3[i]);
    }
    printf("\n");
    charArray(&arr1,size1);
    intArray(&arr2, size2);
    longintArray(&arr3, size3);
}//end main
