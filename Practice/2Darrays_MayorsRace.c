/*
 Programmer: Rumaisa Kashif
 Date: 29/10/2023
 Description: Q1- Analysing Results from the Mayors Race
 */

#include <stdio.h>

void Check_Winner1(int arr[5][4])
{
    int i=0,j=0;
    for (i=0;i<5;i++)
    {
        int highest=arr[i][j];
        int cand=0;
        for (j=0;j<4;j++)
        {
            if (highest<arr[i][j])
            {
                highest=arr[i][j];
                cand=j+1;
            }
            
        }
        printf("Area %d\t:\tCandidate %d\n", i+1, cand);
    }
}

void Check_Winner2(int arr[5][4])
{
    for (int j=0;j<4;j++)
    {
        int sum=0;
        for (int i=0;i<5;i++)
        {
            sum+=arr[i][j];
        }
        printf("Candidate %d\t:\tTotal Votes %d\n", j+1, sum);
    }
}


int Check_Winner3(int arr[5][4])
{
    int highest=-99999;
    int sum;
    int area=0;
    for (int i=0;i<5;i++)
    {
        sum=0;
        for (int j=0;j<4;j++)
        {
            sum+=arr[i][j];
        }
        if (sum>highest)
        {
            highest=sum;
            area=i+1;
        }
    }
    return area;
}

int main()
{
    int arr[5][4]= { {192,48,206,37},
        {147,90,312,21},
        {186,12,121,38},
        {114,21,408,39},
        {267,13,382,29}};
    Check_Winner1(arr);
    Check_Winner2(arr);
    printf("Area with maximum votes casted is: %d\n", Check_Winner3(arr));
}//end main
