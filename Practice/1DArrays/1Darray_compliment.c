//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: Using a single loop to find the compliment of two predefined, sorted arrays
#include <stdio.h>

int main(void)
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10]={3,3,4,4,5,5,6,6,7,7};
    int arr3[10];
    int k=0,i=0,j=0;
    printf("complement of array 1 and array 2 is: ");
    while ( i<10 &&  j<10)
    {
        if (arr1[i]!=arr2[j])
        {
            j++;//increment index of array 2 till last value to cross check with every single element in array 2
            if (j==10)//once last value reached and no match found, proceed to store value in array 1 into array 3
            {
                arr3[k]=arr1[i];
                printf("%d\t", arr3[k]);
                j=0;//reset index for array 2 to repeat process
                i++;//increment to reach next value in array 1
                k++;//increment to call next memory space in array 3
            }
        }
        else if (arr1[i]==arr2[j])//if match found, proceed to next value in array 1
        {
            i++;
        }
    }
    printf("\n");
}
