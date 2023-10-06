//Rumaisa Kashif
//23K0744
//Program to find highest and lowest number in an array
#include <stdio.h>

int main()
{
    printf("lets find highest and lowest number in an array!\n");
    int arr[10]={4,1,6,8,10,21,8,9,2,6};//initialization and declaration of array
    int highest=-99999;
    int lowest=99999;
    int i;
    for (i=0;i<10;i++)
    {
        if (arr[i]>highest)
        {
            highest=arr[i];
        }
        if (arr[i]<lowest)
        {
            lowest=arr[i];
        }
    }//end for loop
    printf("maximum number is:%d and minimum number is:%d\n", highest, lowest);//printing result
}//end main
