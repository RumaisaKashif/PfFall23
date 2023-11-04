/*
 Programmer: Rumaisa Kashif
 Date: 31/10/2023
 Desc: Sieve of Eratosthenes */

#include <stdio.h>

int main() {
    int arr[100];
    for (int i=0;i<100;i++)
    {
        arr[i]=i+1;
    }
    for (int j=1;j<100;j++)
    {
        if (arr[j+2]%2==0)
        {
            arr[j+2]=0;
        }
    }
    for (int m=2;m<100;m++)
    {
        if (arr[m]!=0)
        {
            if (arr[m+4]%3==0)
            {
                arr[m+4]=0;
            }
        }
    }
    for (int n=5;n<100;n++)
    {
        if (arr[n]!=0)
        {
            if (arr[n+6]%5==0)
            {
                arr[n+6]=0;
            }
        }
    }
    for (int o=7;o<100;o++)
    {
        if (arr[o]!=0)
        {
            if (arr[o+8]%7==0)
            {
                arr[o+8]=0;
            }
        }
    }
    for (int i=0;i<100;i++)
    {
        arr[0]=0;
        if (arr[i]!=0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
