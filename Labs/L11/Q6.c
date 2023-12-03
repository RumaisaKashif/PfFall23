/*
Create a structure named Date having day, month and year as its elements. Store the current
date in the structure. Now add 45 days to the current date and display the final date.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date{
    int day;
    int month;
    int year;
} date;

void changeDate(struct Date* date){
    date->day+=45;
    if (date->day>31)
    {
        date->day-=31;
        date->month+=1;
        if (date->month>12)
        {
           date->month-=12;
           date->year+=1; 
        }
    }
}

int main()
{
    date.day=3;
    date.month=12;
    date.year=2023;

    changeDate(&date);
    printf("%d\t", date.day);
    printf("%d\t", date.month);
    printf("%d\n", date.year);
}//end main



