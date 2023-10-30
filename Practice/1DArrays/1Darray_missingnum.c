//Programmer: Rumaisa Kashif
//Date: 14/10/23
//Desc: missing number array
#include <stdio.h>
int main()
{
    int size;
    printf("enter number of integers:\n");
    scanf("%d", &size);
    int arr[size-1];
    printf("enter consecutive elements\n");
    for (int i=0;i<size-1;i++)
    {
        printf("enter element no. %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<size-2;i++)
    {
        if (arr[i+1]!=arr[i]+1)
        {
            int num=arr[i]+1;
            printf("missing number is: %d\n", num);
        }
    }
}//end main
