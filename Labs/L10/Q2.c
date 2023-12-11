
/*
Programmer: Rumaisa Kashif
Desc: Write a C program that implements a function to swap the values of two variables using only pointers (without using any arithmetic or temporary variables). 
Your function should be generic and work for variables of different data types.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stddef.h>

//size_t gives size in bytes hence eliminating the need for sizeof op in malloc

void swap(void* a, void* b, size_t size)
{
    void* temp;//buffer
    temp=malloc(size);
    if (temp==NULL)
    {
        printf("memory allocaiton failed, retry.\n");
        return;
    }
    memcpy(temp,a,size);
    memcpy(a,b,size);
    memcpy(b,temp,size);
    free(temp);
}

int main()
{
    //for integers:
    int a,b;
    printf("enter a and b to swap:\n");
    scanf("%d %d",&a,&b);
    printf("a and b before swapping: %d and %d\n", a,b);
    swap(&a,&b,sizeof(int));
    printf("a and b after swapping: %d and %d\n", a,b);
}
