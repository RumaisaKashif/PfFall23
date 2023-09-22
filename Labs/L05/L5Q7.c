//Program to print total price of items before and after discount along with the money saved
//Rumaisa Kashif
//23K0744
#include <stdio.h>//using library to access required functions

int main() 
{
    float p, s, sp;//p=total price, s=amount saved, sp=sale price after discount is applied
    printf("Enter the total price of bought items:\n");
    scanf("%f", &p);//take input for total price of items bought from user
    if (p<2000)
    {
        sp= p;
        s= 0.00;
    }
    else if (p>=2000 && p<=4000)
    {
        sp= p*0.8;
        s= p-sp;
    }
    else if (p>4000 && p<=6000)
    {
        sp= p*0.7;
        s= p-sp;
    }
    else
    {
        sp= p*0.5;
        s= p-sp;
    }
    printf("Total price before discount: %f\t\n", p);
    printf("Total price after discount: %f\t\n", sp);
    printf("Amount saved: %f\t\n", s);
}//end main
