/*
 Programmer: Rumaisa Kashif
 Date: 31/10/2023
 Q1(a). C language passes j and k by value y default instead of passing by reference.
 
 */
#include <stdio.h>

void swap(int* a, int* b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int main()
{
    int j=2;
    int k=5;
    printf("j=%d, k=%d,\n", j,k);
    swap(&j,&k);
    printf("j=%d, k=%d\n", j,k);
    return 0;
}//end main
