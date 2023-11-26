/*
Programmer: Rumaisa Kashif
Date: 26/11/23
Description: Recursion: Tower of Hanoi
*/
#include <stdio.h>
#include <stdlib.h>

void towerOfHanoi(int n, char a, char b, char c)
{
    if (n==0)
    {
        return;
    }
    else
    {
        //first assuming you have n=3, you pick up the pyramid of n=2 and place it on B 
        towerOfHanoi(n-1,a,c,b);
        //then remove largest disk from A and place it on C
        printf("%c to %c\n", a,c);
        //then remove pyramid of 2 from B and place it on C
        towerOfHanoi(n-1,b,a,c);
    }
}

int main() 
{
    int n;
    printf("Enter n, where n is the number of disks:\n");
    scanf("%d", &n);
    towerOfHanoi(n,'A','B','C');
}//end main
