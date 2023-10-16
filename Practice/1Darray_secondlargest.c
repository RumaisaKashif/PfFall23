//Programmer: Rumaisa Kashif
//Date: 16/10/23
//Desc: Write a function SecondLargest that repeatedly takes integer input from the user one at a time until the user enters -1, and returns the second largest element. Write the main program that prints the second largest element according to the format given in example.
#include <stdio.h>
#include <stdbool.h>

void Secondlargest(void)
{
    int arr[100000];
    int c=0;
    while (1)
    {
        for (int i=0;i<100000;i++)
        {
            printf("enter no. %d: \n", c+1);
            scanf(" %d", &arr[i]);
            if (arr[i]==-1)
            {
                break;
            }
            c++;
        }
        break;
    }
    if (c<2)
    {
        printf("there's no second largest!\n");
    }
    int highest=-99999;
    for (int i=0;i<c;i++)
    {
        if (arr[i]>highest)
        {
            highest=arr[i];
        }
    }
    int secondlargest=-99999;
    for (int i=0;i<c;i++)
    {
        if (arr[i]>secondlargest && arr[i]!=highest)
        {
            secondlargest=arr[i];
        }
    }
    printf("the second largest number is: %d\n", secondlargest);
}

int main()
{
    Secondlargest();
}
