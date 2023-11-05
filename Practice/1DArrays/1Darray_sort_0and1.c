/*
Programmer: Rumaisa Kashif
Date: 5/11/23
Desc: array sort
*/

#include <stdio.h>

int main()
{
int i, low, high;
int a[10] = {0, 1, 1, 1, 0, 1, 0, 0, 1, 0};
int temp;
low = 0;
high = 9;
while (low <= high)
{
    switch ( a[low] )
    {
     case 0: 
        if (a[low]>a[low+1])
        {
            temp=a[low];
            a[low]=a[low+1];
            a[low+1]=temp;
        }
        low++;
        break;
     case 1:
        if (a[high] < a[low]) 
        {
            temp = a[low];
            a[low] = a[high];
            a[high] = temp;
        }
        high--;
        break;
     default:
        break;
    }
}
printf("Sorted array:\t");
for (int i = 0; i < 10; i++) 
{
    printf("%d\t", a[i]);
}
}
