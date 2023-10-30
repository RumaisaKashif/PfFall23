//Programmer: Rumaisa Kashif
//Date: 14/10/23
//Desc: find numbers which are being repeated only twice in an array
#include <stdio.h>
int main()
{
    int size;
    printf("enter number of integers:\n");
    scanf("%d", &size);
    int arr[size];
    printf("enter elements\n");
    for (int i=0;i<size;i++)
    {
        printf("enter element no. %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<size;i++)
    {
        int c=0;
        if (arr[i]!=-1)//check if new number has already been observed or not to avoid reptition
        {
            for (int j=0;j<size;j++)
            {
                if (arr[i]==arr[j] && i!=j)
                {
                    c+=1;
                    arr[j]=-1;//mark number which has already been observed
                    //alternative way is to store values in an array
                }
            }
            if (c==1)
            {
                printf("number found!\n");
                printf("number is: %d\n", arr[i]);
            }
        }
    }
}//end main
