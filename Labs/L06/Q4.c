//Rumaisa Kashif
//23K0744
#include <stdio.h>

int main() {
    int a,b;
    int num;
    printf("enter two numbers, a and b, where is the smaller one of the two:\n");//ask for input
    scanf("%d %d",&a,&b);
    for (num=a; num<=b; num++)
    {
        switch (num)
        {
            case 1:
                printf("one\t");
                break;
            case 2:
                printf("two\t");
                break;
            case 3:
                printf("three\t");
                break;
            case 4:
                printf("four\t");
                break;
            case 5:
                printf("five\t");
                break;
            case 6:
                printf("six\t");
                break;
            case 7:
                printf("seven\t");
                break;
            case 8:
                printf("eight\t");
                break;
            case 9:
                printf("nine\t");
                break;
            default://after 9, the rest of the numbers will be printed in terms of whether they are even or odd
                if (num%2==0)
                {
                    printf("even\t");
                }
                else 
                {
                    printf("odd\t");
                }
        }//end switch
    }//end for loop
}//end main
