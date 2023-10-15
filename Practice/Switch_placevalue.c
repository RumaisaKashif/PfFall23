//Programmer: Rumaisa Kashif
//Date: 15/10/23
//Desc: Write a program to calculate the place value of digit in an integer
#include <stdio.h>

int main()
{
    int num;
    printf("enter number: \n");
    scanf("%d", &num);
    char p;
    printf("enter place value using the following menu:\n");
    printf("u=unit\nt=ten\nh=hundred\ns=thousand\ne=ten thousand\nn=hundred thousand\nm=million\ni=ten million\n");
    scanf(" %c",&p);
    int n=num;
    int v=0;
    switch (p)
    {
        case 'u':
            v=num%10;
            printf("the digit at this place value is: %d\n", v);
            break;
        case 't':
            num=num/10;
            if (num==0)
            {
                printf("this place value does not exist.\n");
            }
            v=num%10;
            printf("the digit at this place value is: %d\n", v);
            break;
        case 'h':
            num=num/100;
            if (num==0)
            {
                printf("this place value does not exist.\n");
            }
            v=num%10;
            printf("the digit at this place value is: %d\n", v);
            break;
        case 's':
            num=num/1000;
            if (num==0)
            {
                printf("this place value does not exist.\n");
            }
            v=num%10;
            printf("the digit at this place value is: %d\n", v);
            break;
        case 'e':
            num=num/10000;
            if (num==0)
            {
                printf("this place value does not exist.\n");
            }
            v=num%10;
            printf("the digit at this place value is: %d\n", v);
            break;
        case 'n':
            num=num/100000;
            if (num==0)
            {
                printf("this place value does not exist.\n");
            }
            v=num%10;
            printf("the digit at this place value is: %d\n", v);
            break;
        case 'm':
            num=num/1000000;
            if (num==0)
            {
                printf("this place value does not exist.\n");
            }
            v=num%10;
            printf("the digit at this place value is: %d\n", v);
            break;
        case 'i':
            num=num/10000000;
            if (num==0)
            {
                printf("this place value does not exist.\n");
            }
            v=num%10;
            printf("the digit at this place value is: %d\n", v);
            break;
    }//end switch
    return 0;
}//end main
