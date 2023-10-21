/*
 Programmer: Rumaisa Kashif
 Date: 18/10/23
 Desc: Print
    *****
    *****
    *****
 ***********
     * *
      |
     \_/
     | |
*************
**  *****  **
**  *****  **
**  *****  **
**  *****  **
    *****
    ** **
    ** **
    ** **
    ** **
    ** **
***** *****
 */
#include <stdio.h>
#include <stdbool.h>

void hat(int n)
{
    printf(" ");
    for (int i=1;i<n;i++)
    {
        for (int spaces=1;spaces<n;spaces++)
        {
            printf(" ");
        }
        for (int j=0;j<n+1;j++)
        {
            printf("*");
        }
        printf("\n");
        printf(" ");
    }
    for (int i=0;i<3*n-1;i++)
    {
        printf("*");
    }
    printf("\n");
    printf(" ");
}

void face(int n)
{
    for (int spaces=0;spaces<n;spaces++)
    {
        printf(" ");
    }
    printf("*");
    for (int spaces2=0;spaces2<n-3;spaces2++)
    {
        printf(" ");
    }
    printf("*");
    printf("\n");
    for (int spaces3=0;spaces3<n+2;spaces3++)
    {
        printf(" ");
    }
    printf("|");
    printf("\n");
    for (int spaces4=0;spaces4<n+1;spaces4++)
    {
        printf(" ");
    }
    printf("\\");
    for (int spaces5=0;spaces5<n-3;spaces5++)
    {
        printf("_");
    }
    printf("/");
    printf("\n");
    for (int spaces6=0;spaces6<n+1;spaces6++)
    {
        printf(" ");
    }
    printf("|");
    for (int spaces7=0;spaces7<n-3;spaces7++)
    {
        printf(" ");
    }
    printf("|\n");
}

void torso(int n)
{
    for (int i=0; i<3*n+1;i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n/2;j++)
        {
            printf("*");
        }
        for (int spaces=0;spaces<n/2;spaces++)
        {
            printf(" ");
        }
        for (int k=0;k<n+1;k++)
        {
            printf("*");
        }
        for (int spaces=0;spaces<n/2;spaces++)
        {
            printf(" ");
        }
        for (int j=0;j<n/2;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void legs(int n)
{
    for (int j=0;j<n+1;j++)
    {
        for (int spaces=0;spaces<n;spaces++)
        {
            printf(" ");
        }
        for (int m=0;m<n/2;m++)
        {
            printf("*");
        }
        for (int spaces=0;spaces<n-3;spaces++)
        {
            printf(" ");
        }
        for (int m=0;m<n/2;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int spaces=0;spaces<n-3;spaces++)
    {
        printf(" ");
    }
    for (int i=0;i<n+1;i++)
    {
        printf("*");
    }
    for (int spaces=0;spaces<n-3;spaces++)
    {
        printf(" ");
    }
    for (int i=0;i<n+1;i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int h;
    printf("enter height of hat:\n");
    scanf("%d", &h);
    hat(h);
    face(h);
    torso(h);
    legs(h);
}
