/*
 Programmer: Rumaisa Kashif
 Date: 18/10/23
 Desc: Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S. In case of multiple subarrays, return the subarray which comes first on moving from left to right.
 */
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int size;
    int S;
    printf("enter size of array: \n");
    scanf("%d", &size);
    int arr[size];
    for (int i=0;i<size;i++)
    {
        printf("enter value no. %d\n", i+1);
        scanf(" %d", &arr[i]);
    }
    printf("enter number S: \n");
    scanf(" %d", &S);
    int sum=0;
    for (int i=0;i<size;i++)
    {
        int count=1;
        sum=arr[i];//cant use sum+=arr[i] here b/c of nested loop
        for (int j=i+1;j<size;j++)
        {
            sum+=arr[j];
            count++;
            if (sum==S)
            {
                printf("the elements from Index %d to %d when summed results in the output of %d.\n", i, j, S);
                return 0;
            }
            if (sum>S)
            {
                break;
            }
        }
    }
    printf("No subarray found with a sum of %d.\n", S);
}//end main
