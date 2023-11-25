/*
Programmer: Rumaisa Kashif
Date: 25/11/23
Description: Dot product
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int s1,s2;
    printf("enter size of first array: \n");
    scanf("%d", &s1);
    printf("enter size of second array: \n");
    scanf("%d", &s2);
    if (s1!=s2)
    {
        printf("Arrays of unequal sizes, dot prroduct cannot be found!\n");
        return 0;
    }
    int* arr1; int* arr2;
    arr1=(int*)malloc(s1*sizeof(int));
    arr2=(int*)malloc(s2*sizeof(int));
    for (int i=0;i<s1;i++)
    {
        printf("enter element number %d of first array then second array: \n", i+1);
        scanf("%d%d",(arr1+i), (arr2+i));
    }
    int mul=0;
    for (int i=0;i<s1;i++)
    {
        mul+= *(arr1+i) * *(arr2+i);
    }
    printf("Dot product is: %d", mul);
    free(arr1);
    free(arr2);
}//end main
