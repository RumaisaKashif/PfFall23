/*
 Programmer: Rumaisa Kashif
 Date: 18/10/23
 Desc: discount calculator for a coffee shop using functions
 */

#include <stdio.h>

void calculateDiscount(int total, int freq)
{
    float bill=0;
    float discount=0;
    //using conditions to calculate different discounts based on customer loyalty and purchase history
    if (freq>10 && total>=50)
    {
        bill=0.85*total;
    }
    else if (freq>5 && total>=30)
    {
        bill=0.90*total;
    }
    else
    {
        bill=total;
    }
    discount=total-bill;
    //printing discount and bill
    printf("the discount received is: $%f\n the total bill after discount is: $%f\n", discount, bill);
}//end calculateDiscount

int main()\
{
    int total, visits;
    //take user input
    printf("enter total purchase amount: \n");
    scanf("%d", &total);
    printf("enter number of times the customer has visited the shop in the past month: \n");
    scanf("%d", &visits);
    //call function
    calculateDiscount(total,visits);
}//end main
