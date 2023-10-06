//Rumaisa Kashif
//23K0744
//program to print sum of array elements
#include <stdio.h>

int main() 
{
    int arr[9]={1,2,3,4,5,6,7,8,9};//initialization and declaration of array
    int i;//initialization of index counter 
    int sum=0;//initialization and declaration of variable sum
    for (i=0; i<9; i++)
    {
        sum=sum+arr[i];//add each element to the sum
    }
    printf("sum of array elements is:%d\n", sum);//print sum
}//end main
