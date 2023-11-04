/*
 Programmer: Rumaisa Kashif
 Date: 31/10/2023
 Desc: Zoo's track record of food eaten by monkeys in a week */

#include <stdio.h>

int main() 
{
    int arr[3][7]={0};
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<7;j++)
        {
            printf("enter food eaten by monkey %d on day %d of the week: \n", i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    //to find average amount of food eaten per day by each monkey:
    int avg, sum;
    for (int j=0;j<7;j++)
    {
        avg=0;
        sum=0;
        for (int i=0;i<3;i++)
        {
            sum+=arr[i][j];
        }
        avg=sum/3;
        printf("average amount of food eaten on day %d by the monkey family was: %d\n\n", j+1, avg);
    }
    //finding the least amount of food eaten by any monkey in the entire week
    int least=99999;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<7;j++)
        {
           if (arr[i][j]<least)
           {
               least=arr[i][j];
           }
        }
    }
    printf("the least amount of food eaten by any monkey in the entire week was: %d\n\n", least);
    
    //finding the greatest amount of food eaten by any monkey in the entire week
    int greatest=-99999;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<7;j++)
        {
           if (arr[i][j]>greatest)
           {
               greatest=arr[i][j];
           }
        }
    }
    printf("the greatest amount of food eaten by any monkey in the entire week was: %d\n", greatest);
}//end main
