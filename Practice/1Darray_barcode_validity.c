//Programmer: Rumaisa Kashif
//Date:17/10/23
//Desc: program to check validity of barcode

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[12];
    printf("enter barcode below(remeber to add a space after every digit entry)\n");
    for (int i=0;i<12;i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum;
    int oddSum=0;
    int evenSum=0;
    for (int i=0;i<12;i++)
    {
        if (i%2==0)
        {
            oddSum+=arr[i];
        }
        else
        {
            evenSum+=arr[i];
        }
    }
    sum=oddSum*2+evenSum;
    if (sum%10==0 && arr[11]==0)
    {
        printf("barcode is validated\n");
    }
    else
    {
        printf("barcode invalid\n");
    }
}
