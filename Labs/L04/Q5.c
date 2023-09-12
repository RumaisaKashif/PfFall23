//Rumaisa Kashif 23k0744
//Q5
//code to find which of the two people is older using their DOB

#include <stdio.h>

int main()
{
    printf("lets find who's older\n");
    int ya, yb, ma, mb, da, db;
    printf("enter year of birth for person 1:\n");
    scanf("%d", &ya);
    printf("enter year of birth for person 2:\n");
    scanf("%d", &yb);
    if (ya>yb)
    {
        printf("person b is older\n");
    }
    else if (yb>ya)
    {
        printf("person c is older\n");
    }
    else
    {
        printf("enter month of birth for person 1 as a number between 1 and 12:\n");
        scanf("%d", &ma);
        printf("enter month of birth of person 2 as a number between 1 and 12:\n");
        scanf("%d", &mb);
        if (ma>mb)
        {
            printf("person b is older\n");
        }
        else if (mb>ma)
        {
            printf("person a is older\n");
        }
        else
        {
            printf("enter date of birth of person 1 as an integer:\n");
            scanf("%d", &da);
            printf("enter date of birth of person 2 as an integer:\n");
            scanf("%d", &db);
            if (da>db)
            {
                printf("person 2 is older\n");
            }
            else if (db>da)
            {
                printf("person 1 is older\n");
            }
            else
            {
                printf("person 1 and person 2 are the same age");
            }
        }
    }
    
}
