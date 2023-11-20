/*
Programmer: Rumaisa Kashif
Date: 20th November 2023
Description: traverse to a stair path comprising n stairs using 1,2 or 3 steps only and find the number of ways of doing so
*/

#include <stdio.h>

int stair(int n) {
    if (n==1) 
    {
        return 1;
    } 
    if (n==2) 
    {
        return 2;
    } 
    if (n==3) 
    {
        return 4;
    } 
    else 
    {
        return stair(n-1)+stair(n-2)+stair(n-3);
    }
}

int main() 
{
    int a;
    printf("Enter the number of stairs you want: \n");
    scanf("%d", &a);

    if (a < 1) 
    {
        printf("Invalid input.\n");
        return 0;
    }

    printf("no of ways: %d", stair(a));
    return 0;
}//end main
