//Rumaisa Kashif
//23K0744
//Program to reverse array elements
#include <stdio.h>

int main() 
{
    int arr[9]={1,2,3,4,5,6,7,8,9};//initialisation and declaration 
    int i, temp;
    for (i=0; i<4; i++)//to reverse array elements
    {
        temp=arr[i];
        arr[i]=arr[8-i];
        arr[8-i]=temp;
    }//end loop 
    for (i = 0; i < 9; i++)//to print reversed array
    {
        printf("%d ", arr[i]);
    }//end loop
}//end main
