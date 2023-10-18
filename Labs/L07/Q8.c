//Programmer: Rumaisa Kashif
//Date: 14/10/23
//Desc: code to sort array elements in ascending order
#include <stdio.h>
int main()
{
    int size;//declaration of variable 
    printf("enter size of array:\n");//prompt user to enter input
    scanf("%d", &size);
    int arr[size];//array declaration
    for (int i=0;i<size;i++)
    {
        printf("enter element no. %d\n", i+1);
        scanf("%d", &arr[i]);
    }//end loop
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            if (arr[j]>arr[i] && arr[j]!=arr[i])
            {
                int temp=arr[i];//switch values
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }//end loop
    }//end loop
    printf("sorted array is as follows: ");//print output
    for (int i=0;i<size;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}//end main
