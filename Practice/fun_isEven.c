//Programmer: Rumaisa Kashif
//Date: 12/10/23
//Desc: function to figure out if an entered number is even
#include <stdio.h>
#include <stdbool.h>

bool isEven(int n)
{
    if (n%2==0)
    {
        printf("number is even\n");
    }
    printf("number is odd\n");
}

void main(){
    int num;
    printf("enter num:\n");
    scanf("%d", &num);
    isEven(num);
}
