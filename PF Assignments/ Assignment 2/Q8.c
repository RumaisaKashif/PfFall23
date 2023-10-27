/*
 Programmer: Rumaisa Kashif
 Date: 18/10/23
 Desc: persistence number
 */

#include <stdio.h>

void pers(int n)
{
    int count=0;
    while (n>=10)//while number is not a single digit number
    {
        int mul=1;
        while (n!=0)
        {
            int digit=n%10;//separating digits of number
            mul=mul*digit;//multiplying each digit
            n=n/10;//increasing place value for digit acquirement to execute as desired
        }
        n=mul;//reset n to new number which is still not a single digit number
        count++;//increase count if single sigit number is not reached
    }
    printf("the persistence number is: %d\n", count);//print the number of times n has been reset
}

int main()
{
    while (1)
    {
        int number;
        char option;
        printf("enter number: \n");//take input from user
        scanf(" %d", &number);
        pers(number);//call function
        printf("do you want to exit (y=yes, n=no): \n");
        scanf(" %c", &option);
        if (option=='y')
        {
            return 0;
        }
    }
}//end main
