// Rumaisa Kashif
//  main.c
//finding max and min value of function f(x)=x^2+3x+2 in domain [-9,8]
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Let's find the max value of f(x)=x^2+3x+2:\n");
    int x;
    int highest=-999999;
    for (x=-9;x<=8;x++)
    {
        int new_highest=(x*x)+(3*x)+2;
        if (new_highest>highest)
        {
            highest=new_highest;
        }
    }
    printf("%d\n", highest);
    printf("now lets find the lowest value!:\n");
    int lowest=99999999;
    for (x=-9;x<=8;x++)
    {
        int new_lowest=(x*x)+(3*x)+2;
        if (new_lowest<lowest)
        {
            lowest=new_lowest;
        }
    }
    printf("%d\n", lowest);
}//end main
