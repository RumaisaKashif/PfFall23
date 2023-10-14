//Programmer: Rumaisa Kashif
//Date: 14/10/23
//Desc: reverse array
#include <stdio.h>
int main()
{
    int size;
    printf("enter size of array:\n");
    scanf("%d", &size);
    int arr[size];
    for (int i=0;i<size;i++)
    {
        printf("enter element no. %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    printf("reversed array is as follows:\t");
    for (int i=0;i<size;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}//end main
