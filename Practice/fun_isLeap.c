//Programmer: Rumaisa Kashif
//Date: 12/10/23
//Desc: fucntion to figure out if an entered year is a leap year or not
#include <stdio.h>
#include <stdbool.h>

bool isLeap(int y)
{
    if (y%400==0)
    {
        printf("its a leap year!\n");
    }
    else if (y%100!=0 && y%4==0)
    {
        printf("its a leap year!\n");
    }
    else 
    {
        printf("not a leap year!\n");
    }
}

void main(){
    int num;
    printf("enter num:\n");
    scanf("%d", &num);
    isLeap(num);
}
