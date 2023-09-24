// Rumaisa Kashif
// main.c
//finding avg value of three numbers a,b, and c and determining whether its higher than any one or more of the individual numbers
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float avg;
    printf("enter a,b,c so that we can take out their average:\n");
    scanf("%f, %f, %f", &a, &b, &c);
    avg=(a+b+c)/3;
    printf("avg= %f\n", avg);
    if (avg>a && avg>b && avg>c)
    {
        printf("average is higher than a,b, and c\n");
    }
    else
    {
        if (avg>a && avg>b)
        {
            printf("avg is higher than a and b\n");
        }
        else if (avg>a && avg>c)
        {
            printf("avg is higher than a and c\n");
        }
        else if (avg>b && avg>c)
        {
            printf("avg is higher than b and c\n");
        }
        else if (avg>a)
        {
            printf("avg is just higher than a\n");
        }
        else
        {
            if (avg>b)
            {
                printf("avg is just higher than b\n");
            }
            else if (avg>c)
            {
                printf("avg is just higher than c\n");
            }
        }
    }
}
    
